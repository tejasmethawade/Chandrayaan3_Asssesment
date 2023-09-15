/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x=0,y=0,z=0;
    vector<string>commands = {"f","r","u","b","l"};
    string direction = "N";
    int left = 3;
    int right = 1;
    vector<string>dir = {"N","E","S","W"};
    
    for(int i=0; i<commands.size(); i++){
        
        if(commands[i] == "f"){
            if(direction == "N" or direction =="S"){
                y++;
            }
            else if(direction == "E" or direction =="W"){
                x++;
            }
            else{
                z++;
            }
        }
        else if(commands[i] == "b"){
            if(direction == "N" or direction =="S"){
                y--;
            }
            else if(direction == "E" or direction =="W"){
                x--;
            }
            else{
                z--;
            }
        }
        else if(commands[i] == "u"){
            direction = "UP";
        }
        else if(commands[i] == "d"){
            direction = "DOWN";
        }
        else if(commands[i] == "l"){
            
            direction = dir[left];
            left = (left-1)%4;
            right = (right-1)%4;
        }
        else if(commands[i] == "r"){
            direction = dir[right];
            left = (left+1)%4;
            right = (right+1)%4;
        }
        
    }
    cout<<"("<<x<<","<<y<<","<<z<<")"<<" ";
    cout<<direction<<endl;

    return 0;
}
