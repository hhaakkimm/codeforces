String text = in.next();
String word = "pizdec";
for(int i = 0; i < text.length(); i++){
  boolean flag = 0;
  for(int j = 0; j < word.length(); j++){
    if(text.charAt(i).equals(word.charAt(j)))
    {
      i++;
    }
    else
    {
      flag=1;
    }
  }
  if(!flag)
  {
      text = text.substring(0,i-word.length())+"******"+text.substring(i);
  }
}
