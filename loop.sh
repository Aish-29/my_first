echo "Enter number 1:"
read num1
echo "Enter number 2:"
read num2

if [ $num1 -gt $num2 ]
then
    echo "$num1 is greater than $num2"

elif [ $num2 -gt $num1 ]
then 
    echo "$num2 is greater than $num1"

else 
    echo "$num1 is equal to $num2"
fi
