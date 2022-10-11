/*
     ______                 __                 _______                              
    |   __ \.-----.-----.--|  |.-----.----.   |     __|.----.----.-----.-----.-----.
    |      <|  -__|     |  _  ||  -__|   _|   |__     ||  __|   _|  -__|  -__|     |
    |___|__||_____|__|__|_____||_____|__|     |_______||____|__| |_____|_____|__|__|

*/

void myBGFiller(std::uint8_t* line, std::uint32_t y, bool skip){
    
    //readFromAddress(512+(screenWidth*y), line, 220);
    readFromAddressQuad(sx+screenWidth*(y+sy), line, 220);
    //memset(&line[0],0,220);
}

