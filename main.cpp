#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    string s;
    deque <int> queue;
    int annoy = 0;
    cin >> s;
    for (int i = 0, l = s.length(); i < l; i++) {
        for (int i = 0, m = queue.size(); i < m; i++){
            queue[i] += 1;
        }
        switch (s[i]){
            case 'b':
                queue.push_back(0);
                break;
            case 'f':
                for (int i = 0, m = queue.size(); i < m; i++){
                    annoy += queue[i];
                }
                queue.push_front(0);
                break;
            case 'p':
                queue.pop_front();
                break;
            default:
                break;
        }
        /*
        cout << "annoy:" << annoy << endl << "queue:";
        for (int i = 0, m = queue.size(); i < m; i++){
            cout << queue[i];
        }
        cout << endl << endl;
        */
    }
    cout << annoy << endl;
    return 0;
}
