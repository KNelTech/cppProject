    #include <iostream>
    #include <string>

    using namespace std;

    int main()
    {
        //printed statements
        cout << "Well hello ..." << endl;
        
        cout << "So, what's your name?" << endl;

        //read that input
        string user_name;
        getline (cin, user_name);
        
        cout << "Well hello there  " << user_name << endl;

        return 0;
    }