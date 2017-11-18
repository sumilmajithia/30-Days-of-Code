#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        Student(string firstName, string lastname, int id, vector<int> scores) : Person(firstName,lastname,id), testScores(scores){}

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate()
        {
            unsigned int sum =0;
            for(const int element : testScores) {
                    sum+=element;
            }
            double mean = sum/testScores.size();
            if (mean < 40 ) return 'T';
            if (mean < 55 ) return 'D';
            if (mean < 70 ) return 'P';
            if (mean < 80 ) return 'A';
            if (mean < 90 ) return 'E';
            if (mean <=100) return 'O';
            
            return 'Z';
        }
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
