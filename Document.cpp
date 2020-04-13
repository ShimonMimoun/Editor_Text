
/*
Shimon Mimoun
*/


#include <iostream>
#include "Document.h"
#include <algorithm>
using namespace std;


void Document::n(){ 
    cout<<position_curent <<"  "<< current_vector_string[position_curent-1] << endl;
}

void Document::p(){ 

      for(int i=0; i <current_vector_string.size(); i++)
      std::cout <<current_vector_string.at(i) << endl;
}
void Document::a(){

    string string_temp;
    cin.ignore();
    getline(cin, string_temp);
    while(string_temp!="."){
        position_curent++;
        current_vector_string.insert(current_vector_string.begin()+(position_curent-1),string_temp);
        getline (cin, string_temp);
    }
}
void Document::i(){ 
    // cout<<"POSITION "<<position_curent<<" "<<current_vector_string[position_curent-2]<<endl;
    string string_temp;
    cin.ignore();
    getline(cin, string_temp);
    while(string_temp!="."){
        if(position_curent>1){
        position_curent++;
        current_vector_string.insert(current_vector_string.begin()+(position_curent-2)  ,string_temp);
        }else if(position_curent>0){
             position_curent++;
        current_vector_string.insert(current_vector_string.begin() ,string_temp);
     
        }

        getline(cin, string_temp);
    }
} 
void Document::c(){ 
    current_vector_string.erase(current_vector_string.begin()+(position_curent-1));
    string string_temp;
    cin.ignore();
    getline(cin, string_temp);
    int i=0;
    while(string_temp!="."){
        current_vector_string.insert(current_vector_string.begin()+position_curent-1+i,string_temp);
        i++;
        getline (cin, string_temp);
    }
}
void Document::d(){ 
    if(current_vector_string.size()>=1){
        
    current_vector_string.erase(current_vector_string.begin()+(position_curent-1));
    position_curent--;
    }

}
void Document::change_current_number(string string_temp){
    position_curent = stoi(string_temp);
}
void Document::searches_forward_after_current(string string_temp){ 
        bool verif = true;
        int ind = position_curent;
        while(verif){
            if(ind > (current_vector_string.size()-1)) ind=0;  
            string ans = current_vector_string[ind];
            if(ans.find(string_temp)!= std::string::npos){
                cout <<current_vector_string[ind] << endl;
                position_curent = ind+1;
                verif= false;
                break;
            }
            ind+=1;
             if(ind==position_curent) {
                 verif= false;
             }
        }
}

void Document::j(){
string s=current_vector_string[position_curent-1]+"";

string s2=current_vector_string[position_curent];
string returnvalue=s+s2;
current_vector_string[position_curent-1]=returnvalue;



current_vector_string.erase(current_vector_string.begin()+(position_curent));
position_curent--;





}
void Document::backward(string string_temp){

         bool verif = true;
        int position_temp_final = position_curent-1;

        while(verif){
            if(position_temp_final<=0){

             position_temp_final=current_vector_string.size()-1;

        }
        
            string temp = current_vector_string[position_temp_final-1];

            if(temp.find(string_temp)!= std::string::npos){
            
                position_curent=position_temp_final;
                cout <<current_vector_string[position_temp_final-1] << endl;

                verif= false;

                break;
            
            }

            position_temp_final-=1;
            
            if(position_temp_final==position_curent){
             verif= false;
            }
            
        }
}
void Document::replaces_old_new(string old ,string news){ 
     size_t position_curenti = 0;

     string temp = current_vector_string[position_curent-1];
     

    (position_curenti = temp.find(old)) != std::string::npos;
    string repons = temp.substr(0,position_curenti);
    temp.erase(0, position_curenti);
    repons = repons.append(news);
    temp.erase(0, old.size()-1);
    repons = repons.append(temp.substr(0,temp.size()-1));
    current_vector_string[position_curent-1]=(current_vector_string.begin()+position_curent-1,repons);


}


