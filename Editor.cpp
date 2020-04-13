
/*
Shimon Mimoun
*/

#include "Editor.h"

bool is_number_local(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void Editor::loop(){
    string help;

    string read_line;

    cin >> read_line;

    while(read_line!= "Q"){
    
        if(is_number_local(read_line.substr(0,2)))
        {
        doc_current.change_current_number(read_line.substr(0,2));
            if(read_line[2]=='d'){
             doc_current.d();
            }
            if(read_line[2]=='n') {
            doc_current.n();
        }
        if(read_line[2]==',' && read_line[4]=='j'){
                doc_current.j();
        }
          if(read_line[2]==',' && read_line[5]=='j'){
                doc_current.j();
        }
        
        }else if(is_number_local(read_line.substr(0,1))){
             doc_current.change_current_number(read_line.substr(0,1));

             if(read_line[1]=='d'){
             doc_current.d();
            }
            if(read_line[1]=='n') {
            doc_current.n();
        }
        if(read_line[1]==',' && read_line[3]=='j'){
                doc_current.j();
        }

        }
        if(read_line[0]=='n') {
            doc_current.n();
        }
         if(read_line[0]=='d'){
             doc_current.d();
         }
        else if(read_line=="%p") {
             doc_current.p();
        }
        else if(read_line=="a"){
        doc_current.a();
        } 
        else if(read_line=="c"){
             doc_current.c();
     
        }else if(read_line=="i"){ 
            doc_current.i();
        }else if(read_line[0]=='?'){
             if(read_line.size()!=1){
                help = read_line.substr(1,read_line.size()-1);
                doc_current.backward(help);
             }
        } 
        else if(read_line[0]=='/'){
            if(read_line.size()!=1){
                help = read_line.substr(1,read_line.size()-1);
                doc_current.searches_forward_after_current(help);
            }
         
        }
        else if(read_line[0]=='s' && read_line[1]=='/'){
            string value_arr[3];
            int i =0;
            size_t position_curent = 0;

         
            while ((position_curent = read_line.find('/')) != std::string::npos) {
                value_arr[i] = read_line.substr(0, position_curent);
                read_line.erase(0, position_curent + 1);
                i++;
            }
            doc_current.replaces_old_new(value_arr[1],value_arr[2]);
        }

  
        cin >> read_line;
    }
}

