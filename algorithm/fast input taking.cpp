inline void fps(long int *a)
{
       register char c=0;
       while (c<33) c=getchar();
       *a=0;
       while (c>33)
       {
            *a=*a*10+c-'0';
             c=getchar();
       }
}
//for input output fps(&k)  
