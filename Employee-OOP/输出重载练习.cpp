/*
// general skeleton of the overloaded output operator
ostream&
operator <<(ostream& os, const ClassType &object)
{
	// any special logic to prepare object

	// actual output of members
	os << // ...

	// return ostream object
	return os;
}
*/

//14.7为下面的 CheckoutRecord 类定义一个输出操作符：

class CheckoutRecord {
public:
	// ...
private:
	double book_id;
	string title;
	Date date_borrowed;
	Date date_due;
	pair<string,string> borrower;
	vector< pair<string,string>* > wait_list;
};

ostream& operator <<(ostream &out,const CheckoutRecord &re){
	cout<<book_id<<titile<<endl;
	cout<<"date_borrowed\t"<<date_borrowed<<"\n"<<"date_due\t"<<date_due;
	cout<<re.borrower.first<<re.borrower.second<<endl;
	cout<<"wait_list"<<endl;
	for(vector<pair<string,string>*>::const_iterator iter=re.wait_list.begin;iter!=re.wait_list.end;iter++){
		cout<<(*iter)->first<(*iter)->second<<endl;
	}
	return out;
}

//内部定义：friend ostream& operator<<(ostream &,const CheckoutRecord &);?



