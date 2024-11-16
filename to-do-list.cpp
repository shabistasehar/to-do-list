#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Task{
   public: string taskname;
    public: bool iscomplete;
   
};

vector<Task>task;

void addtask(){
    
    string taskname;
    
    
        cout<<"Enter Task Description"<<":";
        cin.ignore();
        getline(cin,taskname);
        task.push_back({taskname,false});
        cout<<"task added "<<endl;

}
void markcomplete(){
    int index;
    int n=task.size();
    cout<<"Enter the index of task to be marked as complete:";
    cin>>index;
    if(index>0 && index<=n){
        task[index-1].iscomplete=true;
    }
    else{
        cout<<"invalid task index";
    }

}
void display(){
    int n=task.size();
    cout<<"\nhere are your tasks:\n";
    if(task.empty()){
        cout<<"no tasks to display";
    }
    else{
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<"."<<task[i].taskname<<":"<<(task[i].iscomplete?"completed":"not completed")<<"\n";
            
        }
        cout<<"\n";
    }

}

using namespace std;
int main(){
    int choice;
    while(true){
    cout<<"To do list\n Menu:\n 1.Add a new tast\n 2.Mark a task as done\n 3.Display tasks\n 4.Exit "<<endl;
    cout<<"enter your choice:";
    cin>>choice;
    switch (choice)
    {
    case 1: if(choice==1){
        addtask();
    }
        break;
    case 2: if(choice==2){
        markcomplete();

    }
    break;
    case 3:{
        display();
    }
    break;
    case 4:{
        cout<<"thanks for using";
        return 0;
        
    }
    
    
    default:{
        cout<<"invalid choice";
    }
        break;
    }
    }
    return 0;
}