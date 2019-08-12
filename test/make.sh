echo "compile test programs..."
test_names=("accident" "cards"  "enum_int_conv" "repair" "right_of_way" "roll" "run" "speed_limit" "shared_ptr" "stop")
for test_name in ${test_names[@]}
    do
    echo "compiling " ${test_name} " ....."
    out_name="test_"${test_name}".out"
    file_name=${test_name}".cpp"
    g++ -o ${out_name} ${file_name}
done
echo "Fin."
