#include<iostream>

using namespace std;

class data{

    public:
    	
    int comp_id;
	char comp_name[100];
	int comp_staff_quantity;
	int comp_revenue;
	int comp_import_raw_diamonds;
	int comp_export_diamonds;
	char comp_ceo[100];
	
	 
	public:
	
	void setdata(){
		
		cout<<"Enter id : ";
		cin>>comp_id;
		
		cout<<"Enter company name : ";
		cin>>comp_name;
		
		cout<<"Enter staff quantity: ";
		cin>>comp_staff_quantity;
		
		cout<<"revenue : ";
		cin>>comp_revenue;
		
		cout<<"import raw diamonds : ";
		cin>>comp_import_raw_diamonds;
		
		cout<<"Enter export_diamonds : ";
		cin>>comp_export_diamonds;
		
		cout<<"Enter ceo : ";
		cin>>comp_ceo;
		
	}     	
	
	void getdata(){
		
		cout<<"Your value of id : "<<comp_id<<endl;	
		cout<<"Your value of company name : "<<comp_name<<endl;	
		cout<<"Your value of staff quantity : "<<comp_staff_quantity<<endl;	
		cout<<"Your value of revenue : "<<comp_revenue<<endl;	
		cout<<"Your value of import raw diamonds : "<<comp_import_raw_diamonds<<endl;	
		cout<<"Your value of export diamonds : "<<comp_export_diamonds<<endl;	
		cout<<"Your value of ceo : "<<comp_ceo<<endl;	
		 
	}
};

main(){
	
	data c1,c2;
	data c[100];
	
	int i;
	int j;
	
	cout<<"Enter value : ";
	cin>>j;
	
	for (i=0 ; i<j; i++){
		
		c[i].setdata();
	}
    
    
	for (i=0 ; i<j; i++){
		
		c[i].getdata(); 
	}
	
	
//	cout<<"your id:"<<c[100].comp_id<<endl;
	
	
}
