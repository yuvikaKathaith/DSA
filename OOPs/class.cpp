#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    int level;
    //getter and setter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    int setHealth(int h){
        health=h;
    }
    char setLevel(int l){
        level=l;
    }
    // constructor
    Hero(){
        cout<<"constructor created, if we create a constructor on our own the default constructor gets destroyed itself"<<endl;
    }
    //parameterised constructor
    Hero(int level){ 
        this->level=level;  //this a pointer to the object
    }
    //destructor
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    //static
    Hero h1; //destructor is automatically called for static allocation
    //dynamically
    Hero*b=new Hero;    
    delete b;   //destructor should be manually called for destructor 


    // Hero ramesh;
    // ramesh.setLevel('A');
    // ramesh.setHealth(10);
    // Hero suresh(ramesh); //copy constructor
    // cout<<suresh.getLevel()<<endl;
    // cout<<suresh.getHealth()<<endl;


    // //creation of object h1
    // Hero h1;    //static allocation of h1
    // cout<<h1.getHealth()<<endl;
    // cout<<h1.level<<endl;

    // Hero *h2=new Hero;  //dynamic allocation of h2

    // h1.level=9;
    // h1.setHealth(70);
    // cout<<h1.getHealth()<<endl;
    // cout<<"after change "<<h1.level<<endl;

    // (*h2).level=9;
    // (*h2).setHealth(70);
    // cout<<(*h2).getHealth()<<endl;  //1
    // cout<<h2->getHealth()<<endl;    //2 ways of accessing from getter
    // cout<<h2->level<<endl;  //1
    // cout<<(*h2).level<<endl;    //2 different ways off accessing
    // h2->level=11;
    // cout<<"after change "<<h2->level<<endl;
}