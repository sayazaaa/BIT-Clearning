/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d",&m);
    while(n<=m)
    {
    char wi[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    long long id,i;
    int sum=0,Y;
    int j=0;
    char sign;
    scanf("%17lld%c",&id,&sign);
    i=id;
    while(1)
    {
        if(i==0)
        {
            break;
        }
        else
        {
            j++;
        }
        i/=10;
    }
    if(j==17)//17位身份证判断
    {
        char str1[17];
        for(int i=16;i>=0;i--)
        {
            str1[i]=id%10;
            id/=10;
        }
        for(int i=0;i<=16;i++)
        {
            sum+=str1[i]*wi[i];
        }
        Y=sum%11;
        if((Y==0&&sign=='1')||(Y==1&&sign=='0')||(Y==2&&sign=='X')||(Y==3&&sign=='9')||(Y==4&&sign=='8')||(Y==5&&sign=='7')||(Y==6&&sign=='6')||(Y==7&&sign=='5')||(Y==8&&sign=='4')||(Y==9&&sign=='3')||(Y==10&&sign=='2'))
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
     else if(j==15)
    {
        char str2[15];
        for(int i=14;i>=0;i--)
        {
            str2[i]=id%10;
            id/=10;
        }
        char str3[17];
        for(int i=0;i<6;i++)
        {
            str3[i]=str2[i];
        }
        str3[6]=1;
        for(int i=8;i<=16;i++)
        {
            str3[i]=str2[i-2];
        }
        int l3;
        l3=str2[14]+str2[13]*10+str2[12]*100;
        if((l3==996)||(l3==997)||(l3==998)||(l3==999))
        {
            str3[7]=8;
        }
        else
        {
            str3[7]=9;
        }
        for(int i=0;i<=16;i++)
        {
            sum+=str3[i]*wi[i];
        }
        Y=sum%11;
        for(int i=0;i<17;i++)
        {
            printf("%d",str3[i]);
        }
        switch(Y)
        {
            case 1:printf("%d\n",0);break;
            case 2:printf("X\n");break;
            case 3:printf("%d\n",9);break;
            case 4:printf("%d\n",8);break;
            case 5:printf("%d\n",7);break;
            case 6:printf("%d\n",6);break;
            case 7:printf("%d\n",5);break;
            case 8:printf("%d\n",4);break;
            case 9:printf("%d\n",3);break;
            case 10:printf("%d\n",2);break;
        }
    n++;
    }
}
}*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n=1,m; -
   scanf("%d",&m);
    while(n<=m)
 {
  char wi[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
 long long id,i;
    int sum=0,Y;
   int j=0;
   char sign;
 scanf("%17lld%c",&id,&sign);
   i=id;
  while(1)
   {
      if(i==0)
       {
          break;
     }
      else
       {
          j++;
       }
      i/=10;
 }
  if(j==17)//17位身份证判断
    {
      char str1[17];
     for(int i=16;i>=0;i--)
      {
          str1[i]=id%10;
         id/=10;
        }
        
        int y,m,d;
        y=str1[6]*1000+str1[7]*100+str1[8]*10+str1[9];
        m=str1[10]*10+str1[11];
        d=str1[12]*10+str1[13];
         if((y-1900)%4==0)
        {
            if(d>31||(m==2&&d>29)||(d==31&&(m==4||m==6||m==9||m==11)))
            {
                printf("Invalid\n");
            }
            else
            {
      for(int i=0;i<=16;i++)
      {
          sum+=str1[i]*wi[i];
        }
      Y=sum%11;
      if((Y==0&&sign=='1')||(Y==1&&sign=='0')||(Y==2&&sign=='X')||(Y==3&&sign=='9')||(Y==4&&sign=='8')||(Y==5&&sign=='7')||(Y==6&&sign=='6')||(Y==7&&sign=='5')||(Y==8&&sign=='4')||(Y==9&&sign=='3')||(Y==10&&sign=='2'))
       {
          printf("Valid\n");
     }
      else
       {
          printf("Invalid\n");
       }
     }
 }
 else
 {
     if(d>31||(m==2&&d>28)||(d==31&&(m==4||m==6||m==9||m==11)))
            {
                printf("Invalid\n");
            }
            else
            {
                for(int i=0;i<=16;i++)
      {
          sum+=str1[i]*wi[i];
        }
      Y=sum%11;
      if((Y==0&&sign=='1')||(Y==1&&sign=='0')||(Y==2&&sign=='X')||(Y==3&&sign=='9')||(Y==4&&sign=='8')||(Y==5&&sign=='7')||(Y==6&&sign=='6')||(Y==7&&sign=='5')||(Y==8&&sign=='4')||(Y==9&&sign=='3')||(Y==10&&sign=='2'))
       {
          printf("Valid\n");
     }
      else
       {
          printf("Invalid\n");
       }
            }
 }
   }
   else if(j==15)
    {
      char str2[15];
     for(int i=14;i>=0;i--)
      {
          str2[i]=id%10;
         id/=10;
        }
      char str3[17];
     for(int i=0;i<6;i++)
        {
          str3[i]=str2[i];
       }
      str3[6]=1;
     for(int i=8;i<=16;i++)
      {
          str3[i]=str2[i-2];
     }
      int l3;
        l3=str2[14]+str2[13]*10+str2[12]*100;
      if((l3==996)||(l3==997)||(l3==998)||(l3==999))
     {
          str3[7]=8;
     }
      else
       {
          str3[7]=9;
     }
     int y,m,d;
        y=str3[6]*1000+str3[7]*100+str3[8]*10+str3[9];
        m=str3[10]*10+str3[11];
        d=str3[12]*10+str3[13];
        if((y-1900)%4==0)
        {
        
            if(d>31||(m==2&&d>29)||(d==31&&(m==4||m==6||m==9||m==11)))
            {
                printf("Invalid\n");
            }
            else{
            
            
      for(int i=0;i<=16;i++)
      {
          sum+=str3[i]*wi[i];
        }
      Y=sum%11;
      for(int i=0;i<17;i++)
       {
          printf("%d",str3[i]);
      }
      switch(Y)
      {
          case 0:printf("%d\n",1);break;
         case 1:printf("%d\n",0);break;
         case 2:printf("X\n");break;
        case 3:printf("%d\n",9);break;
         case 4:printf("%d\n",8);break;
         case 5:printf("%d\n",7);break;
         case 6:printf("%d\n",6);break;
         case 7:printf("%d\n",5);break;
         case 8:printf("%d\n",4);break;
         case 9:printf("%d\n",3);break;
         case 10:printf("%d\n",2);break;
        }
    }
}
    else
    {
        if(d>31||(m==2&&d>28)||(d==31&&(m==4||m==6||m==9||m==11)))
            {
                printf("Invalid\n");
            }
            else
            {
              for(int i=0;i<=16;i++)
      {
          sum+=str3[i]*wi[i];
        }
      Y=sum%11;
      for(int i=0;i<17;i++)
       {
          printf("%d",str3[i]);
      }
      switch(Y)
      {
          case 0:printf("%d\n",1);break;
         case 1:printf("%d\n",0);break;
         case 2:printf("X\n");break;
        case 3:printf("%d\n",9);break;
         case 4:printf("%d\n",8);break;
         case 5:printf("%d\n",7);break;
         case 6:printf("%d\n",6);break;
         case 7:printf("%d\n",5);break;
         case 8:printf("%d\n",4);break;
         case 9:printf("%d\n",3);break;
         case 10:printf("%d\n",2);break;
            }
    }
  }
   }
   else
   {
       printf("Invalid\n");
   }
   
  n++;
    }
}


       
