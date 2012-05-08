#include <iostream>
#include <vector>
#include <string>
	 
using namespace std;
	 
main()
{
   vector<double> SS;
	 
   SS.push_back(1);
   SS.push_back(2);
   SS.push_back(4);
	 
   cout << "Loop by index:" << endl;
	 
   int ii;
   double summe = 0;
   double avg = 0;

   for(ii=0; ii < SS.size(); ii++)
   {
      cout << SS[ii] << endl;
      summe += SS[ii];
   }
   
   avg = ( summe / SS.size() ) ;
 
   cout << summe << endl;
   cout << avg << endl;

}
