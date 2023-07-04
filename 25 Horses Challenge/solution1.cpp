#include <iostream>

// Global-Variables
int totalRaces = 0;
int datasetArray [5][5];

// generate Dataset
int generateDataset (){
	
	int data = 1;
	for(int i=0; i<5; i++){
		
		int j = 0;
		while(j <= 4){
			
			datasetArray[i][j] = data;
			j++;
			data++;
		}
	}
	
	return 1;
}

// Display_Dataset
void displayDataset (){
	
	for(int i=0; i<5; i++){
		
		int j = 0;
		while(j <= 4){
			
			std::cout<<" "<<datasetArray[i][j];
			j++;
		}
		std::cout<<std::endl;
	}
}

// SOLUTION
int solution(){

	//creating 5 groups
}

int main(){

	if(generateDataset()){
		
		displayDataset();
	}

return 0;
}
