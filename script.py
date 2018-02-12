# coding=utf-8
from urllib.request import urlopen
import json

def getAttempts(name):

	def apiCall(method, params):
		url = 'http://codeforces.com/api/%s?' % (method)

		for param in params:
			url += '%s=%s&' % (param, params[param])

		data = urlopen(url)
		return data.read().decode('utf-8')

	
	attempts = []

	countPerQuery = 1000
	offset = 1
	hasNext = True
	while hasNext:
		res = apiCall('user.status', {
			'handle': name,
			'from': offset,
			'count': countPerQuery
		})

		data = json.loads(res)

		curCount = 0
		if data['status'] == 'OK':
			for attempt in data['result']:
				attempts.append(attempt)
				curCount += 1
		else:
			print(':thinking:')

		offset += countPerQuery
		hasNext = curCount == countPerQuery

	return attempts


tasks = {}

name = input('Username: ')
attempts = getAttempts(name)
for cur in attempts:
	task = '%s%s' % (cur['problem']['contestId'], cur['problem']['index'])
	if task in tasks:
		if cur['verdict'] == 'OK':
			tasks[task] = 'OK'
	else:
		tasks[task] = cur['verdict']

unsolved = ['%s: %s' % (task, tasks[task]) for task in tasks if not tasks[task] == 'OK']

print(name + " unsolved:")
for line in sorted(unsolved):
	print(line)
