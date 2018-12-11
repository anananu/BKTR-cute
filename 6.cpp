#include<iostream>
using namespace std;
int top;
int n;
class stack
{
public:
    int push(int value){
        if (top<maxsize){
                top=value;
            top++;
                return 1;
        }
    }
        int pop(int *old){
            if (isempty()){
                    return 0;
            }
            *old=top;top--;
            return 1;
        }
        int whatheight()
        {
            return top;
        }
        int isempty(){
        return (top<1);
        }
private:
    int top;
    int maxsize=100;
};
stack stacks;

int init(){
    stacks.push(1);
}

int tipar(stack stacks)
{
cout<<endl;
for(int i=1;i<=stacks.whatheight();i++)
{
   stacks.pop(&i);
   cout << i;
}

return 1;
}

int solutie(stack stacks){
if (stacks.whatheight()==n) return 1;
else return 0;
}

int succesor(stack stacks)
{
if (stacks.whatheight() <n)  {
                        top ++;
                        return 1;
                    }
return 0;
}

int valid(stack stacks)
{
if (stacks.whatheight()==1) return 1;
for(int i=1;i<stacks.whatheight();i++)
   if (i==stacks.whatheight())  {return 0;}
return 1;
}

int bktr_it(){
init(stacks.whatheight());
cout << stacks.whatheight();
while (stacks.whatheight()){
        int am;
        int este;
        do{
            am=succesor(stacks);
            este=valid(stacks);
            cout << stacks.whatheight();
} while(!((am&&este)||(!am)));
if (am){
    if (solutie(stacks)) tipar(stacks);
    else {
        init(stacks);}
}
}
return 0;
}
int main(){
cout<<"n=";cin>>n;
bktr_it();
//return 0;
}
