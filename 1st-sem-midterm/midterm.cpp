#include <iostream>

using namespace std;

int main()
{
    
    float deathNote, bleach, pokemon, cardcaptor, zenki, azumanga, tony, luffy, mojacko, naruto, vampire, shingeki; 
    float number1,number2, number3, number4, number5, number6, number7, number8, number9, number10, number11, number12; 
    float numberTotal, money, change, i, total, vat, vatableSales;
    string order, name, date, address;
    string DN, BW, PC, CSM, ZNP, ADSB, TTCB, LH, MP, NM, VKN, SKB;
    string one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;

    deathNote = 200.00;
    bleach  = 510.00;
    pokemon = 35.00;
    cardcaptor = 50.00;
    zenki = 150.00;
    azumanga = 150.00;
    tony = 325.00;
    luffy = 228.00;
    mojacko = 100.00;
    naruto = 175.00;
    vampire = 110.00;
    shingeki = 90.00;

    cout << "\n";
    cout << "===============================================================\n";
    cout << "===================== The Blue Blood Shop =====================\n";
    cout << "===============================================================\n\n";

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter date (mm/dd/yy): ";
    cin >> date;
    cout << "\n";

    cout << "===============================================================\n";
    cout << "===============================================================\n\n";

    cout << "Products:\n\n";
    cout << 
    "     Deathnote Notebook - P200.00         | (CODE: DN)\n" << 
    "     Bleach S10 Wristwatch - P510.00      | (CODE: BW)\n" <<
    "     Pokemon Cards (Pack of 30) - P35.00  | (CODE: PC)\n" << 
    "     Cardcaptor Sakura Mousepad - P50.00  | (CODE: CSM)\n" << 
    "     Zenki Neck Pillow - P150.00          | (CODE: ZNP)\n" << 
    "     Azumanga Daioh Sling Bag - P150.00   | (CODE: ADSB)\n" << 
    "     Tony Tony Chopper Bagpack - P325.00  | (CODE: TTCB)\n" << 
    "     Luffy's Hat - P228.00                | (CODE: LH)\n" << 
    "     Mojacko's Plushy - P100.00           | (CODE: MP)\n" << 
    "     Naruto Mug - P175.00                 | (CODE: NM)\n" << 
    "     Vampire Knight Necklace - P110.00    | (CODE: VKN)\n" <<  
    "     Shingeki no Kyojin Badge - P90.00    | (CODE: SKB)\n\n";

    cout << "===============================================================\n";
    cout << "===============================================================\n\n";

    for (i = 1; i <= 12; i++)
    {
        cout << "Enter 0 if you want to proceed.\n";
        cout << "Enter the product you want to buy: ";
        cin >> order;

        
        if ((order == "DN") || (order == "dn"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number1;
            deathNote = deathNote * number1;
            total = deathNote + total;
            cout << "\n";
            DN = "Deathnote Notebook";
            one = "true";
        }
        if ((order == "BW") || (order == "bw"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number2;
            bleach = bleach * number2;
            total = bleach + total;
            cout << "\n";
            BW = "Bleach S10 Wristwatch";
            two = "true";
        }
        if ((order == "PC") || (order == "pc"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number3;
            pokemon = pokemon * number3;
            total = pokemon + total;
            cout << "\n";
            PC = "Pokemon Cards (Pack of 30)";
            three = "true";
        }
        if ((order == "csm") || (order == "CSM"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number4;
            cardcaptor = cardcaptor * number4;
            total = cardcaptor + total;
            cout << "\n";
            CSM = "Cardcaptor Sakura Mousepad";
            four = "true";
        }
        if ((order == "znp") || (order == "ZNP"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number5;
            zenki = zenki * number5;
            total = zenki + total;
            cout << "\n";
            ZNP = "Zenki Neck Pillow";
            five = "true";
        }
        if ((order == "ADSB") || (order == "adsb"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number6;
            azumanga = azumanga * number6;
            total = azumanga + total;
            cout << "\n";
            ADSB = "Azumanga Daioh Sling Bag";
            six = "true";
        }
        if ((order == "TTCB") || (order == "ttcb"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number7;
            tony = tony * number7;
            total = tony + total;
            cout << "\n";
            TTCB = "Tony Tony Chopper Bagpack";
            seven = "true";
        }
        if ((order == "LH") || (order == "lh"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number8;
            luffy = luffy * number8;
            total = luffy + total;
            cout << "\n";
            LH = "Luffy's Hat";
            eight = "true";
        }
        if ((order == "MP") || (order == "mp"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number9;
            mojacko = mojacko * number9;
            total = mojacko + total;
            cout << "\n";
            MP = "Mojacko's Plushy";
            nine = "true";
        }
        if ((order == "NM") || (order == "nm"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number10;
            naruto = naruto * number10;
            total = naruto + total;
            cout << "\n";
            NM = "Naruto Mug";
            ten = "true";
        }
        if ((order == "VKN") || (order == "vkn"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number11;
            vampire = vampire * number11;
            total = vampire + total;
            cout << "\n";
            VKN = "Vampire Knight Necklace";
            eleven = "true";
        }
        if ((order == "SKB") || (order == "skb"))
        {
            cout << "How many would you like to purchase: ";
            cin >> number12;
            shingeki =shingeki * number12;
            total = shingeki+ total;
            cout << "\n";
            SKB = "Shingeki no Kyojin Badge";
            twelve = "true";
        }
        if (order == "0")
        {
            break;    
        }
    }


    cout << "\n\n";
    cout << "===============================================================\n"
    << "=========================== RECEIPT ===========================\n"
    << "===============================================================\n"
    << "                      The Blue Blood Shop                      \n"
    << "     649 Corner St. Mayaman Road, Balaka City, Philippines     \n"
    << "                     Contact No: 8893-7111                     \n"
    << "                            " << date << "                           \n"
    << "===============================================================\n"
    << " Customer's Name: " << name << endl
    << "===============================================================\n"
    <<      " Item Dscpt                            Qty.               Price\n\n";

    if(one == "true"){
        cout << " " << DN << "                     " << number1 << "             P" << deathNote << endl;
        numberTotal = number1 + numberTotal;
    }
    if (two == "true"){
        cout << " " << BW << "                  " << number2 << "             P" << bleach << endl;
        numberTotal = number2 + numberTotal;
    }
    if (three == "true"){
        cout << " " << PC << "             " << number3 << "             P" << pokemon << ".00" << endl;
        numberTotal = number3 + numberTotal;
    }
    if (four == "true"){
        cout << " " << CSM << "             " << number4 << "             P" << cardcaptor << endl;
        numberTotal = number4 + numberTotal;
    }
    if (five == "true"){
        cout << " " << ZNP << "                      " << number5 << "             P" << zenki << endl;
        numberTotal = number5 + numberTotal;
    }
    if (six == "true"){
        cout << " " << ADSB << "               " << number6 << "             P" << azumanga << endl;
        numberTotal = number6 + numberTotal;
    }
    if (seven == "true"){
        cout << " " << TTCB << "              " << number7 << "             P" << tony << endl;
        numberTotal = number7 + numberTotal;
    }
    if (eight == "true"){
        cout << " " << LH << "                            " << number8 << "             P" << luffy << endl;
        numberTotal = number8 + numberTotal;
    }
    if (nine == "true"){
        cout << " " << MP << "                       " << number9 << "             P" << mojacko << endl;
        numberTotal = number9 + numberTotal;
    }
    if (ten == "true"){
        cout << " " << NM << "                             " << number10 << "             P" << naruto << endl;
        numberTotal = number10 + numberTotal;
    }
    if (eleven == "true"){
        cout << " " << VKN << "                " << number11 << "             P" << vampire << endl;
        numberTotal = number11 + numberTotal;
    }
    if (twelve == "true"){
        cout << " " << SKB << "               " << number12 << "             P" << shingeki << endl;
        numberTotal = number12 + numberTotal;
    }

    cout << endl;
    cout << " Subtotal:                              " << numberTotal << "             P" << total << ".00" << "\n";

    cout << " Enter amount    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>    P";
    cin >> money;

    change = money - total;

    cout << " Change                                               P" << change << ".00" << endl;

    cout << "===============================================================\n";

    vat = total * .10;
    vatableSales = total - vat;

    cout << " VATable Sale                                         P" << vatableSales << ".00" <<  endl;
    cout << " VAT Amount                                           P" << vat << ".00" <<  "\n";
    cout << "===============================================================\n\n";

    cout << "              Thank You for Shopping with us!                   \n\n";
   
    return 0;
}