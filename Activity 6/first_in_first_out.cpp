#include <iostream>
using namespace std;


int main() {
  int process;
  int time=0;
  int sum=0;
  cout<<"Enter total number of processes: ";
  cin>>process;
  
  int burst_time[process];

  cout<<"Enter the burst time of each process: ";
  for (int i=0; i<process; i++){
    cin>>burst_time[i];
    sum = sum + burst_time[i];
  }

  cout<<"Time\t\t\t\tProcess"<<endl;
  int count = 1;
  while (time <= sum){
    cout<<time<<"\t\t\t\t\t";
    if (count <= process){
        cout<<"P"<<count<<endl;
    }
    time = time + burst_time[count-1];
    count++;
  }


}
// C++ code tinkercad

/*void setup()
{
  pinMode(13, OUTPUT); //set port 13 to output
  pinMode(12, OUTPUT); //set port 12 to output
  pinMode(11, OUTPUT); //set port 11 to output
  pinMode(10, OUTPUT); //set port 10 to output
  pinMode(9, OUTPUT); //set port 9 to output
  pinMode(8, OUTPUT); //set port 8 to output
}

void loop()
{
  first_come_first_serve(); //calling the function.
}

void first_come_first_serve(){
  int time[6] = {5000, 3000, 4000, 1000, 5000, 3000};
  //an array of time in milliseconds to be used in delay function.
  int count = 0; //used to identifies the element of time array.
  for (int i=13; i>=8; i--){
  	digitalWrite(i, HIGH); //Turn the LED On
    delay(time[count]); //Delay.
    digitalWrite(i, LOW); //Turn the LED Off
    count++; //Increment count.
  }
}*/
