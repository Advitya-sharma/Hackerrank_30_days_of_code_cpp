

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
      
        Student(string firstName, string lastName , int id , vector<int> scores): Person( firstName,  lastName,  id){

            firstName = firstName;
            lastName = lastName;
            id = id;
            testScores = scores;
        }
        // Write your constructor here

char calculate(){

int sum=0;
int i=0;
for(i=0;i<testScores.size();i++){

sum += testScores[i]; 
}
sum = sum/i;


if(sum>=90 && sum<=100){

    return 'O';
}
else if(sum>=80 && sum<90){

    return 'E';
}

else if(sum>=70 && sum<80){

    return 'A';
}

else if(sum>=55 && sum<70){

    return 'P';
}

else if(sum>=40 && sum<55){

    return 'D';
}
else {

    return 'T';
}


}
        
};

