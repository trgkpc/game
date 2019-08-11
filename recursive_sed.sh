dir_names=("card" "player" "test")
for dir_name in ${dir_names}
    do
    cd ${dir_name}
    file_names=`ls`
    for file_name in ${file_names}
        do
        sed s/player/driver/g ${file_name} > tmp.cpp
        sed s/Player/Driver/g tmp.cpp > ${file_name}
        rm tmp.cpp
    done
    cd ..
done
echo "Fin."
