
class MyBook : public Book{
   
   int price=0;
    public:

MyBook(string title,string author,int p) : Book(title,author){

price = p;

}
 void display(){

        cout<<"Title: "<<title<<endl;

    cout<<"Author: "<<author<<endl;

    cout<<"Price: "<<price;
    
}

};
