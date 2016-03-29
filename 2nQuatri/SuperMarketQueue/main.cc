#include <iostream>
#include <queue>
#include <sstream>
#include <vector>
using namespace std;

typedef queue<string> cua;

void queues_log(vector<cua> cues) {
  for (int i = 0; i < cues.size(); i++) {
    string persones_log = "";
    cua persones = cues[i];
    while (!persones.empty()) {
      persones_log += " " + persones.front();
      persones.pop();
    }
    cout<<"cua "<<i+1<<":"<<persones_log<<endl;
  }
}

void input_to_queues(vector<cua> &cues, int n_cues) {
  for (int i = 0; i < n_cues; i++) {
    string persones_cua, persona;
    getline(cin, persones_cua);

    istringstream iss(persones_cua);
    cua persones;
    while (iss>>persona) {
      persones.push(persona);
    }
    cues[i] = persones;
  }
}

int main() {

  int n_cues;
  cin>>n_cues;
  vector<cua> cues(n_cues);
  cin.ignore();

  input_to_queues(cues, n_cues);

  cua sortides;
  string command;
  while(cin>>command) {
    if (command == "SURT") {
      int n_cua;
      cin>>n_cua;
      if (n_cua > 0 && n_cua <= n_cues) {
        cua persones = cues[n_cua-1];
        if (!persones.empty()) {
          string persona = cues[n_cua-1].front();
          cues[n_cua-1].pop();
          sortides.push(persona);
        }
      }
    } else {
      string name;
      int n_cua;
      cin>>name;
      cin>>n_cua;

      if (n_cua > 0 && n_cua <= n_cues) {
        cua persones = cues[n_cua-1];
        persones.push(name);
        cues[n_cua-1] = persones;
      }
    }
  }

  cout<<"SORTIDES"<<endl;
  cout<<"--------"<<endl;
  while(!sortides.empty()) {
    cout<<sortides.front()<<endl;
    sortides.pop();
  }
  cout<<endl;
  cout<<"CONTINGUTS FINALS"<<endl;
  cout<<"-----------------"<<endl;
  queues_log(cues);


  return 0;
}
