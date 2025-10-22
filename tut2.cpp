#include <iostream>
#include <vector>
#include <string>
#include<iomanip>
#include<algorithm>
#include<cmath>

using namespace std;
typedef string lol;
using king = char;



int main ()
{
     
       int a,d,sum,price, age ,year,day,u, l;//integer bass no. with no decimal or hum log agee mea - or + bhi laga sakte ha 4 byte ka space hi hoat ha is ka range (-2147483648 sa 2147483647 basa) 
      float pri,sale_price,discount,umi,book,r,k,fan,mat,num1,losser_num,num2, winner_num,cake,fcuk, tree,jam;//decimal
      char x,mr,f,e,qw,p;//character if we put some thing other than i we will get ascii value or if we add it with integer it will use the character assinged value for the character hum log koi bhi character likh sakte ha compiller us ko libreary sa feach kar lega par wo ('') ma aa jata ha bina single cotatin ka nhi hoga ya code runn ma error show kare ga 
      bool m,bro,apple,pie;//only store true or false value kyu ki is ka ka space ek bit hi hota ha ya 0 or ya 1 hoga.
      king hi ='%';
     
      a = 99;
      d = 123; 
      u=9033;
      age=16;
      year=2025;
      day=1.8;// yaha hum log implicit fxn use kar rahe ha is ma system apne ape chamge kar deta ha jaisa yaaha float ko int ma change kar diya 
      l=234;
      pri =6767.98;
      r=76.67;
    
      k=89.97532345678;
      x='1';
      f='l';
  
     e='b';
     qw='%';
     p='a';
     
     m=true;
        bro=true;
      apple=false;
     pie=false;
      book=a^2;  
     
     mr=(bool)10;
    umi=(int)4789.0987;

      lol my_name ="aditya"                    ;
      string name1= "hero@",name2="baba#",name3="car",inf="999";//it is a collection of character in which it contain letter ,digits ,symboles,and space but we can't write any fxn from the std liberery because it is alredy in the program so it will show error
      //yaha hum log explicet use kar rahe ha explesit mea hum log koi bhi variable ko kise or data type ka ho us ko hum log kise or data type ma use kar sakta ha jise hum log int data type ka variable ko boollian data type ma use kar sakte ha is ma human kise bhi data type ko change karta ha
       string myage,yourname,username;
      
      sum =a+d;
    
  fcuk=k/r;                   
   tree=f*day;            
    cake=r+a;
        fan= u%l;
         mat=max(cake,fcuk);
          jam=u+tree-cake*sum/k;
          
        

         //cout(ise program ko hum ide liya use karte ha ki hum loog yaha output da saka )
         //cin (is ka hum log isa liya karta ha ki hum log input da sa ka )
 cout<<"hello"<<endl;
       //getline hum log is liya use karte ha ki jab bhi hum log input da to compiler space or enter ko ek input ki tarh treat nahi kare or hum log ho dushra cin compile ma dikat na ho 
       
       cout<<"i am aditya parkash and you"<<endl;
       getline(cin,yourname);
       cout<<"hello  "<< yourname<<" how are you"<<endl;

 
    //cin.ignore();// ya ignore kar data ha garbage input ko 
       
    
    cout<< "i am 18 year old and you"<<endl;
    getline(cin,myage); 
         cout<<"i am "<<myage<<" year old"<<endl;
    

          cout<<"tumhara username kya ha"<<endl;
      getline(cin>>ws,username);
      cout<<"mera username "<<username<<"ya ha "<<endl;
      
        cout<<mat<<" is greater in cake and fcuk"<<endl;
         
      cout<<"harsh mera beta ha" <<endl;
     cout<<mr<<endl;
cout<<umi<<endl; 
cout<<fcuk<<endl;
cout<<name1<<endl;
      cout<<hi<<endl;
                 cout<<tree<<endl;
                 cout<<my_name<<endl;  
                cout<<bro<<endl;
                cout<<apple<<endl;
                cout<<pie<<endl;
          cout<<"i can eat "<<inf<<" chicken"<<endl;
          cout<<name1<<endl;
cout<<name2<<endl;  
cout<<name3<<endl; 
cout<<m<<endl; 
cout<<p+a<<endl;
  cout<<r+qw<<endl;
     cout<<r+a<<endl;
    cout << a << endl;
        cout << d << endl;
      cout << sum << endl;
      cout << year << endl;
     cout << age<< endl;
    cout << day << endl;
  cout<<pri<<endl;
  cout<<k<<endl;
  cout<<r<<endl;
  cout<<x<<endl;
  cout<<f<<endl;
  cout<<e<<endl;
  cout<<qw<<endl;
  cout<<p<<endl;
   cout<<book<<endl;     
   cout<<cake<<endl;
    cout<<fan<<endl;
             cout<<jam<<endl;
          
          
          
          
          
             cout<<"please enter your orignal price"<<endl; 
                  cin>>price;
             cout<<"please enter your discount percentage"<<endl;
                    cin>>discount;    
       
                       sale_price=price-(price*discount/100);
       
                        cout<<fixed<<setprecision(8);
        
        cout<<"the final sale price ="<<sale_price<<endl;
        cin.ignore();
    cout<<" write your no. "<<endl;
        cin >>num1;
    
        cout<<"write your second no. "<<endl;
          cin>>num2;

          winner_num= max(num1,num2);
          losser_num= min(num1,num2); 
 cout<<fixed<<setprecision(8);
          cout<<"the winner is "<<winner_num<<endl;
          cout<<"the losser is "<<losser_num<<endl;






          
   return 0 ;
  } 
