PROGRAM : Select the Students for Scholarship
 
  	average(avg)=0, total income(ti)=0 
	Enter number of Students(n) 

	For(i=1;i<=n;i++)
	Enter  student’s index number 
 	Enter  student’s  name
	Enter the student's stream(s) 

	Enter the subject 1 mark(sub1)   	  	     
    Enter the subject 2 mark(sub2)                  
  	Enter the subject 3 mark(sub3)  	       
  	Calculate avg= (sub1+sub2+sub3)/3   	     
    Display avg 
                
 	IF (s=="MATHS" and avg>=65) Then 
        Enter the monthly income of father (fsalary)                
 	    Enter the monthly income of mother (msalary) 
 	    Calculate ti =fsalary+msalary                          
  	    Display total income(ti) 
  	             
        	IF (ti<20000) Then                               
  		        Display “you are selected to scholar ship”  	  	        
 	        ELSE                    
 	 	    Display “you are not selected to scholar ship”  	               
 	 	    ENDIF 	        	 
  	  	 	              
 	ELSE IF(s=="BIO" and avg>=60) Then 
        Enter the monthly income of father (fsalary)                
 	    Enter the monthly income of mother (msalary) 
 	    Calculate ti =fsalary+msalary                          
  	    Display total income(ti) 
  	             
        	IF (ti<20000) Then                               
  		        Display “you are selected to scholar ship”  	  	        
 	        ELSE                    
 	 	        Display “you are not selected to scholar ship”  	               
 	 	    ENDIF 	        
  	  	  	 	              
 	ELSE IF(s=="COMMERCE" and avg>=70) Then 
        Enter the monthly income of father (fsalary)                
 	    Enter the monthly income of mother (msalary) 
 	    Calculate ti =fsalary+msalary                          
  	    Display total income(ti) 
  	             
        	IF (ti<20000) Then                               
  		        Display “you are selected to scholar ship”  	  	        
 	        ELSE                    
 	 	        Display “you are not selected to scholar ship”  	               
 	 	    ENDIF
	  	  	 	              
 	ELSE IF(s=="TECHNOLOGY" and avg>=72) Then 
        Enter the monthly income of father (fsalary)                
 	    Enter the monthly income of mother (msalary) 
 	    Calculate ti =fsalary+msalary                          
  	    Display total income(ti) 
  	             
        	IF (ti<20000) Then                               
  		        Display “you are selected to scholar ship”  	  	        
 	        ELSE                    
 	 	        Display “you are not selected to scholar ship”  	               
 	 	    ENDIF
	  	  	 	              
 	ELSE IF(s=="ARTS" and avg>=75) Then 
        Enter the monthly income of father (fsalary)                
 	    Enter the monthly income of mother (msalary) 
 	    Calculate ti =fsalary+msalary                          
  	    Display total income(ti) 
  	             
        	IF (ti<20000) Then                               
  		        Display “you are selected to scholar ship”  	  	        
 	        ELSE                    
 	 	        Display “you are not selected to scholar ship”  	               
 	 	    ENDIF  	  	                     
	ELSE
		Display “you are not selected to scholar ship” 
	END IF
	i=i+1
	END  for until i<=n
     
END 