
/*
Shimon Mimoun
*/

#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Document{
    vector<string> current_vector_string;
    int position_curent;

    public:

    Document(){
        position_curent = 0;
        }
    
    void change_current_number(string str);
    void n();
    void p();
    void a();
    void i();
    void c();
    void d();
    void j();
    void searches_forward_after_current(string str);
    void backward(string str);
    void replaces_old_new(string old , string news);

        

};
