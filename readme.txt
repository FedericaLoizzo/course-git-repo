GIT
Si possono fare "foto" a diversi stadi del progetto. poi si possono confrontare per vedere le differenze.
conflicted copy(su dropbox): se due persone modificano contemporaneamente un documento .
non si sa più qual è la versione corretta.
è possibile taggare ciascuna foto con il nome di chi l'ha fatta. Fatte modifiche, si devono fare commenti: spiegare che modifiche sono state fatte
Quindi Git consente a più utenti di lavorare su uno stesso progetto. Viene data la possibilità di vedere 
cosa è stato fatto pubblicamente: altra gente può scaricare il progetto.
Si lavora bene su file testuali(no foto ecc..). 
Va bene anche se si fa il progetto da soli, per tener traccia dei cambiamenti.

-pwd: stampa il percorso in cui stiamo lavorando
-ls: mostra tutti i file nella cartella in cui ci troviamo
-cd: imposta la directory di lavoro
-mkdir: crea una cartella (o desktop->nuova cartella) oppure mkdir nomecartella 
-touch: crea un file nuovo (touch prova.txt)
-cp: crea una copia(percorso file sorgente- percorso file destinazione)
    cp prova.txt copia.txt
-rm(nomefile): cancella il file
- se a ls - la: ci dà più info (proprietà, quando è stato creato il file), ci dà il nome. Vengono
 mostrate anche le cartelle nascoste.
Dalla linea di comando è anche possibile andare a modificare un file:
vim nomefiledamodificare
-->si apre una finestra con qualche informazione.Siamo nella modalità normale, si può salvare il file 
ma non modificare. per modificare il file premere il tasto 'i'
:wq (il file viene salvato e usciamo dall'editor di testo)
q! (esce dall'editor senza salvare l'editor)

Creo cartella progetto su desktop :

git config --global user.name "Federica Loizzo" 
git config --global user.email "federicaloizzo@hotmail.it"
git config --ls

CREARE PROGETTO
mkdir progetto
cd progetto/  cambio la directory in 'progetto'
git init :per inizializzare il progetto. 
è stata creata una cartella nascosta in progetto salva tutte le versioni
del progetto. Verifica tramite : ls -la
IN LOCALE:per passaar dal working directory al repository si passa attraverso una 
staging area (git add)
Check out è il comando che permette di tornare indietro nel tempo, per
tornare a una "foto" precedente.
git status    dice in che condizioni è il nostro repository

