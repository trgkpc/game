cd test
file_names=`ls`
for file_name in ${file_names}
    do
    sed s/p1/d1/g ${file_name} > tmp.cpp
    sed s/p2/d2/g tmp.cpp > ${file_name}
    rm tmp.cpp
    echo "${file_name} fin"
done
echo "Fin."
