#include<bits/stdc++.h>
using namespace std;

class cpu{
    public:
    void start(){
        cout<<"cpu is ready to work\n";
    }
};

class ram{
    public:
    void load(){
        cout<<"ram is loading data\n";
    }
};

class harddrive{
    public:
    void read(){
        cout<<"hard drive is reading data\n";
    }
};

class gpu{
    public:
    void initialize(){
        cout<<"gpu is initialized\n";
    }
};

class operating_system{
    public:
    void boot(){
        cout<<"operating system is booting\n";
    }
};

class oncomputer{
    private:
    cpu c;
    ram r;
    harddrive h;
    gpu g;
    operating_system os;

    public:
    void execute(){

        cout<<"system is going to start\n";

        h.read();
        r.load();
        c.start();
        g.initialize();
        os.boot();

        cout<<"system is on\n";
    }
};

int main(){

    oncomputer b;
    b.execute();

}
