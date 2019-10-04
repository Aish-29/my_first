#created by Aishnaya
#created on 1/10/2019
#switch case on arithmetic
ans="x"

while [ $ans = "x" ]
do 
echo "Enter 2 Numbers ::"
read num1
read num2



echo "Enter your choice a , s, m, d"
read ch



case $ch in




a) sum=` expr  $num1 + $num2 `
   echo "Sum is $sum"
   ;;


s) diff=` expr $num1 - $num2 `
   echo "Difference is $diff"

   ;;

m) mul=` expr $num1 \* $num2 `

   echo "Multiplication is $mul "
   ;;

d) div=` expr $num1 / $num2 `
    echo "Division is $div"
    ;;


*) echo "Invalid Choice!!"
   ans="z" 
    exit

   ;;

esac 

done

