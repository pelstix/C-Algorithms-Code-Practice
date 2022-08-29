int solution(int year)
{
    // No negative value is allow for year
    if (year <= 0)
        cout << "0 and negative is not allow"
             << "for a year";
 
    // If year is between 1 to 100 it
    // will come in 1st century
    else if (year <= 100)
        return(1);
 
    else if (year % 100 == 0)
        return(year/ 100) ;
    else
        return(year/ 100 + 1 );       
}
 
// Driven code
int main()
{
    solution(90); // this is used to test the code for centuryfromYear
    return 0;
}
