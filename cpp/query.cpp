#include "header.h"

int main()
{
    char conninfo[255];
    int i = 0;

    PGconn *con = connection(conninfo);
    PGresult *result;
    grafica(i);
    i += 1;

    /* Query 1. Trovare tutti gli utenti che sono azienda */
    grafica(i);
    i += 1;
    UtentiAzienda(con, result);

    /* Query 2. Trovare tutti i pagamenti di un certo utente */
    grafica(i);

    /* Query 3. Trovare tutti i pagamenti con un certo metodo di un certo utente */
    /* Query 4. Trovare tutti i prodotti del carrello degli utenti */
    /* Query 5. Trovare che prodotti sono nel magazzino 3 */
    /* Query 6. Trovare il numero di ordini di un utente */
    /* Query 7. prezzo totale carrelli */
    /* Query 8. Trovare tutte le spedizioni verso un utente */
    /* Query 9. Tracciamento spedizione, inserendo il numero di spedizione si restituisce la data di consegna
                se la data di consegan > di data odierna o "Conseganto" altrimenti */
    /* Query 10. Utenti con p.iva e codice fiscale (deve restituire NULL) */
}