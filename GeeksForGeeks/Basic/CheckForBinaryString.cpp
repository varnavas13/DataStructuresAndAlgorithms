

// Return true if str is binary, else false
bool isBinary(string str)
{
   for(int i=0;i<str.size();++i)
   {
       if(str[i]!='0'&&str[i]!='1')
       return false;
   }
   return true;
}