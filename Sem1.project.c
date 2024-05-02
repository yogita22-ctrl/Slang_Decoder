
#include <stdio.h>
#include <string.h>

void convert_short_form_to_long_form(char *str) 
{
    if (strcmp(str, "btw") == 0) {
        strcpy(str, "by the way");
    }
	else if (strcmp(str, "adl") == 0) {
        strcpy(str, "activities of daly life");
    } else if (strcmp(str, "lmfao") == 0) {
        strcpy(str, "laughing my freakng ass off");
    } else if (strcmp(str, "atm") == 0) {
        strcpy(str, "any time money");
    } else if (strcmp(str, "ty") == 0) {
        strcpy(str, "thank you");
    } else if (strcmp(str, "lmk") == 0) {
        strcpy(str, "let me know");
	}   else if (strcmp(str, "imho") == 0) {
        strcpy(str, "in my humble opinion");
    } else if (strcmp(str, "afk") == 0) {
        strcpy(str, "away from keyboard");
    } else if (strcmp(str, "brb") == 0) {
        strcpy(str, "be right back");
    } else if (strcmp(str, "lol") == 0) {
        strcpy(str, "laugh out loud");
    } else if (strcmp(str, "omg") == 0) {
        strcpy(str, "oh my god");
    } else if (strcmp(str, "idk") == 0) {
        strcpy(str, "I don't know");
    } else if (strcmp(str, "ttyl") == 0) {
        strcpy(str, "talk to you later");
    } else if (strcmp(str, "yw") == 0) {
        strcpy(str, "you're welcome");
    } else if (strcmp(str, "np") == 0) {
        strcpy(str, "no problem");
    }else if (strcmp(str, "caj") == 0) {
        strcpy(str, "casual");
    } else if (strcmp(str, "tbh") == 0) {
        strcpy(str, "to be honest");
    } else if (strcmp(str, "ofc") == 0) {
        strcpy(str, "ofcourse");
    } else if (strcmp(str, "IRL") == 0) {
        strcpy(str, "in real life");
    } else if (strcmp(str, "tbf") == 0) {
        strcpy(str, "to be honest");
    } else if (strcmp(str, "ikr") == 0) {
        strcpy(str, "I know right ?");
    } else if (strcmp(str, "Ik") == 0) {
        strcpy(str, "i know");
    } else if (strcmp(str, "Uk") == 0) {
        strcpy(str, "You know");
    }
         else if (strcmp(str, "BRB") == 0) {
        strcpy(str, "Be right back ");
    }else if (strcmp(str, "NVM") == 0) {
        strcpy(str, "Never mind");
    } else if (strcmp(str, "STUF") == 0) {
        strcpy(str, "shut the fuck up");
    } else if (strcmp(str, "YOLO") == 0) {
        strcpy(str, "You only live once");
    } else if (strcmp(str, "SMH") == 0) {
        strcpy(str, "Shaking my head");
    } else if (strcmp(str, "ROFL") == 0) {
        strcpy(str, "Rolling on the floor laughing");
    } else if (strcmp(str, "DIY") == 0) {
        strcpy(str, "Do it yourselve");
    } else if (strcmp(str, "Rn") == 0) {
        strcpy(str, "right now");
    } else if (strcmp(str, "DM") == 0) {
        strcpy(str, "direct message");
    } else if (strcmp(str, "B/W") == 0) {
        strcpy(str, "between");
    }else if (strcmp(str, "Tc") == 0) {
        strcpy(str, "take care");
    } else if (strcmp(str, "GM") == 0) {
        strcpy(str, "Good morning");
    } else if (strcmp(str, "GN") == 0) {
        strcpy(str, "Good night");
    } else if (strcmp(str, "Sd") == 0) {
        strcpy(str, "sweet dream");
    } else if (strcmp(str, "Jk") == 0) {
        strcpy(str, "just kiddng");
    } else if (strcmp(str, "WTF") == 0) {
        strcpy(str, "What the fuck");
    } else if (strcmp(str, "KK") == 0) {
        strcpy(str, "Okay cool");
    } else if (strcmp(str, "G2B") == 0) {
        strcpy(str, "going to bed");
    }   else if (strcmp(str, "PPL") == 0) {
        strcpy(str, "people");
    }else if (strcmp(str, "GF") == 0) {
        strcpy(str, "Girlfriend");
    } else if (strcmp(str, "BF") == 0) {
        strcpy(str, "Boyfriend");
    } else if (strcmp(str, "4evr") == 0) {
        strcpy(str, "Forever");
    } else if (strcmp(str, "WTH") == 0) {
        strcpy(str, "what the hell");
    } else if (strcmp(str, "GFY") == 0) {
        strcpy(str, "Good for you");
    } else if (strcmp(str, "FYI") == 0) {
        strcpy(str, "For your information");
    } else if (strcmp(str, "DL") == 0) {
        strcpy(str, "Download");
    } else if (strcmp(str, "YT") == 0) {
        strcpy(str, "youtube");
    } else if (strcmp(str, "ig") == 0) {
        strcpy(str, "instagram");
    }else if (strcmp(str, "Fb") == 0) {
        strcpy(str, "facebook");
    } else if (strcmp(str, "Wp") == 0) {
        strcpy(str, "whatsapp");
    } 
}
void main() 
{
    char short_form[4];
    printf("Enter short form: ");
    scanf("%s", short_form);
    convert_short_form_to_long_form(short_form);
    printf("Long form: %s\n", short_form);
    getch();
}

