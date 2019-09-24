 #include <iostream>
 #include <time.h>
 using namespace std;

 main(){
 
 intx,i;
 
  
        {
            //You should perform validation for x here.
            char(x), arr;
            switch (x)
            {
                case '0': arr = new char[1] { '0' };
                    return arr;
                case '1': arr = new char[1] { '1' };
                    return arr;
                case '2': arr = new char[3] { 'a', 'b', 'c' };
                    return arr;
                case '3': arr = new char[3] { 'd', 'e', 'f' };
                    return arr;
                case '4': arr = new char[3] { 'g', 'h', 'i' };
                    return arr;
                case '5': arr = new char[3] { 'j', 'k', 'l' };
                    return arr;
                case '6': arr = new char[3] { 'm', 'n', 'o' };
                    return arr;
                case '7': arr = new char[4] { 'p', 'q', 'r', 's' };
                    return arr;
                case '8': arr = new char[3] { 't', 'u', 'v' };
                    return arr;
                case '9': arr = new char[4] { 'w', 'x', 'y', 'z' };
                    return arr;
                default: return null; 
            }
        }
}
