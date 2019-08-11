#DistanceCard make_25mile_card()
#{
#    return DistanceCard(distance_25, 25);
#}
#std::shared_ptr<Card::DistanceCard> hoge()
#{
#    return std::make_shared<Card::DistanceCard>(Card::distance_25, 25);
#}

def main(lines):
    #line 1
    typename = lines[0].split(" ")[0]
    funcname = lines[0].split(" ")[1]
    print("std::shared_ptr<",typename,"> ",funcname,end="",sep="")
    print("{")
    kakko = lines[2].split("(")[1]
    print("    return std::make_shared<",typename,"(",kakko,end="",sep="")
    print("}")
dat_file = open("card.hpp","r")
start_flag = 0
lines = []
for line in dat_file:
    if "()" in line:
        start_flag = 1
    if start_flag > 0:
        if "/**" in line:
            print(line)
            continue
        lines.append(line)
        if len(lines) >= 5:
            main(lines)
            lines = []
            print(line)
            #fi
        #fi
    else:
        print(line,end="")

