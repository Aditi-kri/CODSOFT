#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct dolist {
    string description;
    bool completed;

    dolist(const string& desc) : description(desc), completed(false) {}
};


void add(vector<dolist>& tasks, const string& description) {
    dolist newtsk(description);
    tasks.push_back(newtsk);
    cout << "Task added! " <<  endl;
}


void view(const vector<dolist>& tasks) {
    cout << "Tasks:" << endl;
    if (tasks.empty()==1)
    {
        cout << "To Do List is empty !" << endl ;
    }
    


    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << "\t ";
        if (tasks[i].completed) {
            cout << "[Completed] ";
        } else {
            cout << "[Pending] ";
        }
        cout << tasks[i].description << endl;
    }
}

void markcompleted(vector<dolist>& tasks, int tasknum) {
    if (tasknum >= 1 && tasknum<= static_cast<int>(tasks.size())) {
        tasks[tasknum - 1].completed = true;
        cout << "Task marked as completed! "  << endl;
    } else {
        cout << "Invalid task index!" << endl;
    }
}


void remove(vector<dolist>& tasks, int tasknum) {
    if (tasknum >= 1 && tasknum <= static_cast<int>(tasks.size())) {
        cout << "Task removed!  "  << endl;
        tasks.erase(tasks.begin() + tasknum - 1);
    } else {
        cout << "Invalid task number!" << endl;
    }
}

int main() {
    vector <dolist> tasks;

    while (true) {
        cout << "       To-Do List " << endl;
        cout << "Type 1 to add a new task" << endl;
        cout << "Type 2 to view tasks" << endl;
        cout << "Type 3 to mark a task as Completed" << endl;
        cout << "Type 4 to remove task" << endl;
        cout << "Type 5 to exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            cin.ignore();
            cout << "Enter the task : ";
            string description;
            getline(cin, description);
            add(tasks, description);
        } else if (choice == 2) {
            view(tasks);
        } else if (choice == 3) {
            cout << "Enter the task number to mark as completed: ";
            int tasknum;
            cin >> tasknum;
            markcompleted(tasks, tasknum);
        } else if (choice == 4) {
            cout << "Enter the task number you want to remove: ";
            int tasknum;
            cin >> tasknum;
            remove(tasks, tasknum);
        } else if (choice == 5) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Please enter a valid choice ." << endl;
        }
    }

    return 0;
}
