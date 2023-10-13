mark1=int(input("sub1(out of 100): "))
mark2=int(input("sub2(out of 100): "))
mark3=int(input("sub3(out of 100): "))

avg = int((mark1+mark2+mark3)/3)

if 100>=avg>=90:
	print("Grade obtained: O")
elif 89>=avg>=80:
	print("Grade obtained: A")
elif 79>=avg>=70:
	print("Grade obtained: B")
elif 69>=avg>=60:
	print("Grade obtained: C")
elif 59>=avg>=40:
	print("Grade obtained: D")
elif 39>=avg>=0:
	print("Grade obtained: F")
