while(True):
	pswrd = input("enter password: ")
	
	i=0
	for x in range(0,len(pswrd)):
		if pswrd[i].isupper():
			upper_yn=True
			break
		else:
			upper_yn=False
		i+=1
	
	j=0
	for x in range(0,len(pswrd)):
		if pswrd[j].islower():
			lower_yn=True
			break
		else:
			lower_yn=False
		j+=1
	
	k=0
	for x in range(0,len(pswrd)):
		if pswrd[k].isnumeric():
			num_yn=True
			break
		else:
			num_yn=False
		k+=1		
			
	
	
	if(len(pswrd)<8):
		print("\nThe password must be at least eight characters long")
	
	elif(upper_yn==False):
		print("\nit must contain at least one uppercase letter")
	
	elif(lower_yn==False):
		print("\nit must contain at least one lowercase letter")
		
	elif(num_yn==False):
		print("\nit must contain at least one number")
	
	else:
		print("\nGood to go")
		break
	
