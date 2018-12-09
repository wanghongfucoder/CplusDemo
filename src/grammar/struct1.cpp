/**
* @Author : wanghognfu
* @Date : 18-12-5
* @Descri :
*/


struct ST {
    int x;
    double y;

    virtual void F() {}
};


//ST s {1, 2.5};  error

struct Base {
};

struct Foo {
    int x;
    double y;
};
Foo foo{1, 2.5};