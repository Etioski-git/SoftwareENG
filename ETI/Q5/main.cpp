// Question 5
#include <iostream>

using namespace std;
int main ()
{


    int x;
    int y;
    int z;
    bool Answer;

    cout<< " AND "<<endl;
    cout << "| x | y | z | Answer"<<endl;
    for(x = 0; x<=1; x++){
        for (y = 0; y<=1; y++)
            {
        for (z = 0; z<=1; z++){
        Answer = x && y && z;
    cout << " | "<<x<< " | "<<y<<" | "<<z<<" | "<<Answer <<endl;
                }
            }
    }

    cout<< " OR " <<endl;
    for(x=0;x<=1;x++){
        for (y=0;y<=1;y++)
            {
        for (z=0;z<=1;z++){
        Answer = x || y || z;
    cout << "| "<<x<< " | "<<y<<" | "<<z<<" | "<<Answer <<endl;
                    }
            }
    }


   return 0;

}
