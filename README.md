Vi genererar en fil med värden från 1 - 65, 535 där den typiska byten är 2 i en unsigned short.
Börjar med att generera random tal mellan 0-49 i en offstream i en fil unsignedShort.txt.
Dessa tal omvandlas till en 16 bites Big Endian genom funktionen binary.str16. Till slut så generar programmet en lista med Little endians, unsigned char som är bytes mellan 1-255
samt unsigned shorts. Lösningen är helt byggt på strömmar då det är enklast istället för att hålla det i en array eller andra typer av variabler. I koden skapas också en char av de 8 mellersta bitarna. 
