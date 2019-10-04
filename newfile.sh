#created by Aish
#created on 1/10/2019
# to display particular fields
ans="y"
while [ $ans = "y" -o $ans = "Y" ]
do
echo "Enter the name to display the record for :"
read name
echo "Enter the value to be replaced with"
read val
#cat emprc|grep $name| cut -d" " -f1,2,3,7,9,10
cat emp| grep $name| sed -i "s/67/$val/" emp
echo "Do you want to Continue! y/Y::"
read ans
done
