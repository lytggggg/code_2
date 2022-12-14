??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ t i m . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       T I M   L L   m o d u l e   d r i v e r .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ t i m . h "  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ b u s . h "  
  
 # i f d e f     U S E _ F U L L _ A S S E R T  
 # i n c l u d e   " s t m 3 2 _ a s s e r t . h "  
 # e l s e  
 # d e f i n e   a s s e r t _ p a r a m ( e x p r )   ( ( v o i d ) 0 U )  
 # e n d i f   / *   U S E _ F U L L _ A S S E R T   * /  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( T I M 1 )   | |   d e f i n e d   ( T I M 2 )   | |   d e f i n e d   ( T I M 3 )   | |   d e f i n e d   ( T I M 4 )   | |   d e f i n e d   ( T I M 5 )   | |   d e f i n e d   ( T I M 6 )   | |   d e f i n e d   ( T I M 7 )   | |   d e f i n e d   ( T I M 8 )   | |   d e f i n e d   ( T I M 9 )   | |   d e f i n e d   ( T I M 1 0 )   | |   d e f i n e d   ( T I M 1 1 )   | |   d e f i n e d   ( T I M 1 2 )   | |   d e f i n e d   ( T I M 1 3 )   | |   d e f i n e d   ( T I M 1 4 )   | |   d e f i n e d   ( T I M 1 5 )   | |   d e f i n e d   ( T I M 1 6 )   | |   d e f i n e d   ( T I M 1 7 )  
  
 / * *   @ a d d t o g r o u p   T I M _ L L  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   T I M _ L L _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ L L _ T I M _ C O U N T E R M O D E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C O U N T E R M O D E _ U P )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C O U N T E R M O D E _ D O W N )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C O U N T E R M O D E _ C E N T E R _ U P )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C O U N T E R M O D E _ C E N T E R _ D O W N )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C O U N T E R M O D E _ C E N T E R _ U P _ D O W N ) )  
  
 # d e f i n e   I S _ L L _ T I M _ C L O C K D I V I S I O N ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C L O C K D I V I S I O N _ D I V 1 )   \  
                                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C L O C K D I V I S I O N _ D I V 2 )   \  
                                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ C L O C K D I V I S I O N _ D I V 4 ) )  
  
 # d e f i n e   I S _ L L _ T I M _ O C M O D E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ F R O Z E N )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ A C T I V E )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ I N A C T I V E )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ T O G G L E )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ F O R C E D _ I N A C T I V E )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ F O R C E D _ A C T I V E )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ P W M 1 )   \  
                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C M O D E _ P W M 2 ) )  
  
 # d e f i n e   I S _ L L _ T I M _ O C S T A T E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C S T A T E _ D I S A B L E )   \  
                                                                             | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C S T A T E _ E N A B L E ) )  
  
 # d e f i n e   I S _ L L _ T I M _ O C P O L A R I T Y ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C P O L A R I T Y _ H I G H )   \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C P O L A R I T Y _ L O W ) )  
  
 # d e f i n e   I S _ L L _ T I M _ O C I D L E S T A T E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C I D L E S T A T E _ L O W )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O C I D L E S T A T E _ H I G H ) )  
  
 # d e f i n e   I S _ L L _ T I M _ A C T I V E I N P U T ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ A C T I V E I N P U T _ D I R E C T T I )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ A C T I V E I N P U T _ I N D I R E C T T I )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ A C T I V E I N P U T _ T R C ) )  
  
 # d e f i n e   I S _ L L _ T I M _ I C P S C ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C P S C _ D I V 1 )   \  
                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C P S C _ D I V 2 )   \  
                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C P S C _ D I V 4 )   \  
                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C P S C _ D I V 8 ) )  
  
 # d e f i n e   I S _ L L _ T I M _ I C _ F I L T E R ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 _ N 2 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 _ N 4 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 _ N 8 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 2 _ N 6 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 2 _ N 8 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 4 _ N 6 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 4 _ N 8 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 8 _ N 6 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 8 _ N 8 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 6 _ N 5 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 6 _ N 6 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 6 _ N 8 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 3 2 _ N 5 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 3 2 _ N 6 )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ F I L T E R _ F D I V 3 2 _ N 8 ) )  
  
 # d e f i n e   I S _ L L _ T I M _ I C _ P O L A R I T Y ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ P O L A R I T Y _ R I S I N G )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ P O L A R I T Y _ F A L L I N G ) )  
  
 # d e f i n e   I S _ L L _ T I M _ E N C O D E R M O D E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ E N C O D E R M O D E _ X 2 _ T I 1 )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ E N C O D E R M O D E _ X 2 _ T I 2 )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ E N C O D E R M O D E _ X 4 _ T I 1 2 ) )  
  
 # d e f i n e   I S _ L L _ T I M _ I C _ P O L A R I T Y _ E N C O D E R ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ P O L A R I T Y _ R I S I N G )   \  
                                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ I C _ P O L A R I T Y _ F A L L I N G ) )  
  
 # d e f i n e   I S _ L L _ T I M _ O S S R _ S T A T E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O S S R _ D I S A B L E )   \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O S S R _ E N A B L E ) )  
  
 # d e f i n e   I S _ L L _ T I M _ O S S I _ S T A T E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O S S I _ D I S A B L E )   \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ O S S I _ E N A B L E ) )  
  
 # d e f i n e   I S _ L L _ T I M _ L O C K _ L E V E L ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ L O C K L E V E L _ O F F )   \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ L O C K L E V E L _ 1 )       \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ L O C K L E V E L _ 2 )       \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ L O C K L E V E L _ 3 ) )  
  
 # d e f i n e   I S _ L L _ T I M _ B R E A K _ S T A T E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ B R E A K _ D I S A B L E )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ B R E A K _ E N A B L E ) )  
  
 # d e f i n e   I S _ L L _ T I M _ B R E A K _ P O L A R I T Y ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ B R E A K _ P O L A R I T Y _ L O W )   \  
                                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ B R E A K _ P O L A R I T Y _ H I G H ) )  
  
 # d e f i n e   I S _ L L _ T I M _ A U T O M A T I C _ O U T P U T _ S T A T E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ A U T O M A T I C O U T P U T _ D I S A B L E )   \  
                                                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ T I M _ A U T O M A T I C O U T P U T _ E N A B L E ) )  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   T I M _ L L _ P r i v a t e _ F u n c t i o n s   T I M   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   E r r o r S t a t u s   O C 1 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   O C 2 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   O C 3 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   O C 4 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   I C 1 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   I C 2 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   I C 3 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t ) ;  
 s t a t i c   E r r o r S t a t u s   I C 4 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   T I M _ L L _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ L L _ E F _ I n i t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   T I M x   r e g i s t e r s   t o   t h e i r   r e s e t   v a l u e s .  
     *   @ p a r a m     T I M x   T i m e r   i n s t a n c e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   i n v a l i d   T I M x   i n s t a n c e  
     * /  
 E r r o r S t a t u s   L L _ T I M _ D e I n i t ( T I M _ T y p e D e f   * T I M x )  
 {  
     E r r o r S t a t u s   r e s u l t   =   S U C C E S S ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( T I M x ) ) ;  
  
     i f   ( T I M x   = =   T I M 2 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2 ) ;  
     }  
 # i f   d e f i n e d ( T I M 1 )  
     e l s e   i f   ( T I M x   = =   T I M 1 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 3 )  
     e l s e   i f   ( T I M x   = =   T I M 3 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 4 )  
     e l s e   i f   ( T I M x   = =   T I M 4 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 5 )  
     e l s e   i f   ( T I M x   = =   T I M 5 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 6 )  
     e l s e   i f   ( T I M x   = =   T I M 6 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d   ( T I M 7 )  
     e l s e   i f   ( T I M x   = =   T I M 7 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 8 )  
     e l s e   i f   ( T I M x   = =   T I M 8 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 9 )  
     e l s e   i f   ( T I M x   = =   T I M 9 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 0 )  
     e l s e   i f   ( T I M x   = =   T I M 1 0 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 1 )  
     e l s e   i f   ( T I M x   = =   T I M 1 1 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 2 )  
     e l s e   i f   ( T I M x   = =   T I M 1 2 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 3 )  
     e l s e   i f   ( T I M x   = =   T I M 1 3 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 4 )  
     e l s e   i f   ( T I M x   = =   T I M 1 4 )  
     {  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4 ) ;  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 5 )  
     e l s e   i f   ( T I M x   = =   T I M 1 5 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 6 )  
     e l s e   i f   ( T I M x   = =   T I M 1 6 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6 ) ;  
     }  
 # e n d i f  
 # i f   d e f i n e d ( T I M 1 7 )  
     e l s e   i f   ( T I M x   = =   T I M 1 7 )  
     {  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7 ) ;  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7 ) ;  
     }  
 # e n d i f  
     e l s e  
     {  
         r e s u l t   =   E R R O R ;  
     }  
  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   f i e l d s   o f   t h e   t i m e   b a s e   u n i t   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *                   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     T I M _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ I n i t T y p e D e f   s t r u c t u r e   ( t i m e   b a s e   u n i t   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ T I M _ S t r u c t I n i t ( L L _ T I M _ I n i t T y p e D e f   * T I M _ I n i t S t r u c t )  
 {  
     / *   S e t   t h e   d e f a u l t   c o n f i g u r a t i o n   * /  
     T I M _ I n i t S t r u c t - > P r e s c a l e r                   =   ( u i n t 1 6 _ t ) 0 x 0 0 0 0 ;  
     T I M _ I n i t S t r u c t - > C o u n t e r M o d e               =   L L _ T I M _ C O U N T E R M O D E _ U P ;  
     T I M _ I n i t S t r u c t - > A u t o r e l o a d                 =   0 x F F F F F F F F U ;  
     T I M _ I n i t S t r u c t - > C l o c k D i v i s i o n           =   L L _ T I M _ C L O C K D I V I S I O N _ D I V 1 ;  
     T I M _ I n i t S t r u c t - > R e p e t i t i o n C o u n t e r   =   0 x 0 0 0 0 0 0 0 0 U ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   t i m e   b a s e   u n i t .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ I n i t T y p e D e f   s t r u c t u r e  
     *                   ( T I M x   t i m e   b a s e   u n i t   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ T I M _ I n i t ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I n i t T y p e D e f   * T I M _ I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c r 1 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ C O U N T E R M O D E ( T I M _ I n i t S t r u c t - > C o u n t e r M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ C L O C K D I V I S I O N ( T I M _ I n i t S t r u c t - > C l o c k D i v i s i o n ) ) ;  
  
     t m p c r 1   =   L L _ T I M _ R e a d R e g ( T I M x ,   C R 1 ) ;  
  
     i f   ( I S _ T I M _ C O U N T E R _ M O D E _ S E L E C T _ I N S T A N C E ( T I M x ) )  
     {  
         / *   S e l e c t   t h e   C o u n t e r   M o d e   * /  
         M O D I F Y _ R E G ( t m p c r 1 ,   ( T I M _ C R 1 _ D I R   |   T I M _ C R 1 _ C M S ) ,   T I M _ I n i t S t r u c t - > C o u n t e r M o d e ) ;  
     }  
  
     i f   ( I S _ T I M _ C L O C K _ D I V I S I O N _ I N S T A N C E ( T I M x ) )  
     {  
         / *   S e t   t h e   c l o c k   d i v i s i o n   * /  
         M O D I F Y _ R E G ( t m p c r 1 ,   T I M _ C R 1 _ C K D ,   T I M _ I n i t S t r u c t - > C l o c k D i v i s i o n ) ;  
     }  
  
     / *   W r i t e   t o   T I M x   C R 1   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C R 1 ,   t m p c r 1 ) ;  
  
     / *   S e t   t h e   A u t o r e l o a d   v a l u e   * /  
     L L _ T I M _ S e t A u t o R e l o a d ( T I M x ,   T I M _ I n i t S t r u c t - > A u t o r e l o a d ) ;  
  
     / *   S e t   t h e   P r e s c a l e r   v a l u e   * /  
     L L _ T I M _ S e t P r e s c a l e r ( T I M x ,   T I M _ I n i t S t r u c t - > P r e s c a l e r ) ;  
  
     i f   ( I S _ T I M _ R E P E T I T I O N _ C O U N T E R _ I N S T A N C E ( T I M x ) )  
     {  
         / *   S e t   t h e   R e p e t i t i o n   C o u n t e r   v a l u e   * /  
         L L _ T I M _ S e t R e p e t i t i o n C o u n t e r ( T I M x ,   T I M _ I n i t S t r u c t - > R e p e t i t i o n C o u n t e r ) ;  
     }  
  
     / *   G e n e r a t e   a n   u p d a t e   e v e n t   t o   r e l o a d   t h e   P r e s c a l e r  
           a n d   t h e   r e p e t i t i o n   c o u n t e r   v a l u e   ( i f   a p p l i c a b l e )   i m m e d i a t e l y   * /  
     L L _ T I M _ G e n e r a t e E v e n t _ U P D A T E ( T I M x ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   f i e l d s   o f   t h e   T I M x   o u t p u t   c h a n n e l   c o n f i g u r a t i o n   d a t a  
     *                   s t r u c t u r e   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     T I M _ O C _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ O C _ I n i t T y p e D e f   s t r u c t u r e  
     *                   ( t h e   o u t p u t   c h a n n e l   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ T I M _ O C _ S t r u c t I n i t ( L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C _ I n i t S t r u c t )  
 {  
     / *   S e t   t h e   d e f a u l t   c o n f i g u r a t i o n   * /  
     T I M _ O C _ I n i t S t r u c t - > O C M o d e               =   L L _ T I M _ O C M O D E _ F R O Z E N ;  
     T I M _ O C _ I n i t S t r u c t - > O C S t a t e             =   L L _ T I M _ O C S T A T E _ D I S A B L E ;  
     T I M _ O C _ I n i t S t r u c t - > O C N S t a t e           =   L L _ T I M _ O C S T A T E _ D I S A B L E ;  
     T I M _ O C _ I n i t S t r u c t - > C o m p a r e V a l u e   =   0 x 0 0 0 0 0 0 0 0 U ;  
     T I M _ O C _ I n i t S t r u c t - > O C P o l a r i t y       =   L L _ T I M _ O C P O L A R I T Y _ H I G H ;  
     T I M _ O C _ I n i t S t r u c t - > O C N P o l a r i t y     =   L L _ T I M _ O C P O L A R I T Y _ H I G H ;  
     T I M _ O C _ I n i t S t r u c t - > O C I d l e S t a t e     =   L L _ T I M _ O C I D L E S T A T E _ L O W ;  
     T I M _ O C _ I n i t S t r u c t - > O C N I d l e S t a t e   =   L L _ T I M _ O C I D L E S T A T E _ L O W ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   o u t p u t   c h a n n e l .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 1  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 2  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 3  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 4  
     *   @ p a r a m     T I M _ O C _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ O C _ I n i t T y p e D e f   s t r u c t u r e   ( T I M x   o u t p u t   c h a n n e l   c o n f i g u r a t i o n  
     *                   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   o u t p u t   c h a n n e l   i s   i n i t i a l i z e d  
     *                     -   E R R O R :   T I M x   o u t p u t   c h a n n e l   i s   n o t   i n i t i a l i z e d  
     * /  
 E r r o r S t a t u s   L L _ T I M _ O C _ I n i t ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   C h a n n e l ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C _ I n i t S t r u c t )  
 {  
     E r r o r S t a t u s   r e s u l t   =   E R R O R ;  
  
     s w i t c h   ( C h a n n e l )  
     {  
         c a s e   L L _ T I M _ C H A N N E L _ C H 1 :  
             r e s u l t   =   O C 1 C o n f i g ( T I M x ,   T I M _ O C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         c a s e   L L _ T I M _ C H A N N E L _ C H 2 :  
             r e s u l t   =   O C 2 C o n f i g ( T I M x ,   T I M _ O C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         c a s e   L L _ T I M _ C H A N N E L _ C H 3 :  
             r e s u l t   =   O C 3 C o n f i g ( T I M x ,   T I M _ O C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         c a s e   L L _ T I M _ C H A N N E L _ C H 4 :  
             r e s u l t   =   O C 4 C o n f i g ( T I M x ,   T I M _ O C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         d e f a u l t :  
             b r e a k ;  
     }  
  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   f i e l d s   o f   t h e   T I M x   i n p u t   c h a n n e l   c o n f i g u r a t i o n   d a t a  
     *                   s t r u c t u r e   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     T I M _ I C I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ I C _ I n i t T y p e D e f   s t r u c t u r e   ( t h e   i n p u t   c h a n n e l   c o n f i g u r a t i o n  
     *                   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ T I M _ I C _ S t r u c t I n i t ( L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t )  
 {  
     / *   S e t   t h e   d e f a u l t   c o n f i g u r a t i o n   * /  
     T I M _ I C I n i t S t r u c t - > I C P o l a r i t y         =   L L _ T I M _ I C _ P O L A R I T Y _ R I S I N G ;  
     T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t   =   L L _ T I M _ A C T I V E I N P U T _ D I R E C T T I ;  
     T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r       =   L L _ T I M _ I C P S C _ D I V 1 ;  
     T I M _ I C I n i t S t r u c t - > I C F i l t e r             =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   i n p u t   c h a n n e l .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 1  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 2  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 3  
     *                   @ a r g   @ r e f   L L _ T I M _ C H A N N E L _ C H 4  
     *   @ p a r a m     T I M _ I C _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ I C _ I n i t T y p e D e f   s t r u c t u r e   ( T I M x   i n p u t   c h a n n e l   c o n f i g u r a t i o n   d a t a  
     *                   s t r u c t u r e )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   o u t p u t   c h a n n e l   i s   i n i t i a l i z e d  
     *                     -   E R R O R :   T I M x   o u t p u t   c h a n n e l   i s   n o t   i n i t i a l i z e d  
     * /  
 E r r o r S t a t u s   L L _ T I M _ I C _ I n i t ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   C h a n n e l ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C _ I n i t S t r u c t )  
 {  
     E r r o r S t a t u s   r e s u l t   =   E R R O R ;  
  
     s w i t c h   ( C h a n n e l )  
     {  
         c a s e   L L _ T I M _ C H A N N E L _ C H 1 :  
             r e s u l t   =   I C 1 C o n f i g ( T I M x ,   T I M _ I C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         c a s e   L L _ T I M _ C H A N N E L _ C H 2 :  
             r e s u l t   =   I C 2 C o n f i g ( T I M x ,   T I M _ I C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         c a s e   L L _ T I M _ C H A N N E L _ C H 3 :  
             r e s u l t   =   I C 3 C o n f i g ( T I M x ,   T I M _ I C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         c a s e   L L _ T I M _ C H A N N E L _ C H 4 :  
             r e s u l t   =   I C 4 C o n f i g ( T I M x ,   T I M _ I C _ I n i t S t r u c t ) ;  
             b r e a k ;  
         d e f a u l t :  
             b r e a k ;  
     }  
  
     r e t u r n   r e s u l t ;  
 }  
  
 / * *  
     *   @ b r i e f     F i l l s   e a c h   T I M _ E n c o d e r I n i t S t r u c t   f i e l d   w i t h   i t s   d e f a u l t   v a l u e  
     *   @ p a r a m     T I M _ E n c o d e r I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ E N C O D E R _ I n i t T y p e D e f   s t r u c t u r e   ( e n c o d e r   i n t e r f a c e  
     *                   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ T I M _ E N C O D E R _ S t r u c t I n i t ( L L _ T I M _ E N C O D E R _ I n i t T y p e D e f   * T I M _ E n c o d e r I n i t S t r u c t )  
 {  
     / *   S e t   t h e   d e f a u l t   c o n f i g u r a t i o n   * /  
     T I M _ E n c o d e r I n i t S t r u c t - > E n c o d e r M o d e         =   L L _ T I M _ E N C O D E R M O D E _ X 2 _ T I 1 ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 1 P o l a r i t y         =   L L _ T I M _ I C _ P O L A R I T Y _ R I S I N G ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 1 A c t i v e I n p u t   =   L L _ T I M _ A C T I V E I N P U T _ D I R E C T T I ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 1 P r e s c a l e r       =   L L _ T I M _ I C P S C _ D I V 1 ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 1 F i l t e r             =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 2 P o l a r i t y         =   L L _ T I M _ I C _ P O L A R I T Y _ R I S I N G ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 2 A c t i v e I n p u t   =   L L _ T I M _ A C T I V E I N P U T _ D I R E C T T I ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 2 P r e s c a l e r       =   L L _ T I M _ I C P S C _ D I V 1 ;  
     T I M _ E n c o d e r I n i t S t r u c t - > I C 2 F i l t e r             =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   e n c o d e r   i n t e r f a c e   o f   t h e   t i m e r   i n s t a n c e .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ E n c o d e r I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ E N C O D E R _ I n i t T y p e D e f   s t r u c t u r e   ( T I M x   e n c o d e r   i n t e r f a c e  
     *                   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ T I M _ E N C O D E R _ I n i t ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ E N C O D E R _ I n i t T y p e D e f   * T I M _ E n c o d e r I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c c m r 1 ;  
     u i n t 3 2 _ t   t m p c c e r ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ E N C O D E R M O D E ( T I M _ E n c o d e r I n i t S t r u c t - > E n c o d e r M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y _ E N C O D E R ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A C T I V E I N P U T ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 A c t i v e I n p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 F i l t e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y _ E N C O D E R ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A C T I V E I N P U T ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 A c t i v e I n p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 F i l t e r ) ) ;  
  
     / *   D i s a b l e   t h e   C C 1   a n d   C C 2 :   R e s e t   t h e   C C 1 E   a n d   C C 2 E   B i t s   * /  
     T I M x - > C C E R   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C E R _ C C 1 E   |   T I M _ C C E R _ C C 2 E ) ;  
  
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * /  
     t m p c c m r 1   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C M R 1 ) ;  
  
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * /  
     t m p c c e r   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C E R ) ;  
  
     / *   C o n f i g u r e   T I 1   * /  
     t m p c c m r 1   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C M R 1 _ C C 1 S   |   T I M _ C C M R 1 _ I C 1 F     |   T I M _ C C M R 1 _ I C 1 P S C ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 A c t i v e I n p u t   > >   1 6 U ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 F i l t e r   > >   1 6 U ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 P r e s c a l e r   > >   1 6 U ) ;  
  
     / *   C o n f i g u r e   T I 2   * /  
     t m p c c m r 1   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C M R 1 _ C C 2 S   |   T I M _ C C M R 1 _ I C 2 F     |   T I M _ C C M R 1 _ I C 2 P S C ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 A c t i v e I n p u t   > >   8 U ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 F i l t e r   > >   8 U ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 P r e s c a l e r   > >   8 U ) ;  
  
     / *   S e t   T I 1   a n d   T I 2   p o l a r i t y   a n d   e n a b l e   T I 1   a n d   T I 2   * /  
     t m p c c e r   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P   |   T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) ;  
     t m p c c e r   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 1 P o l a r i t y ) ;  
     t m p c c e r   | =   ( u i n t 3 2 _ t ) ( T I M _ E n c o d e r I n i t S t r u c t - > I C 2 P o l a r i t y   < <   4 U ) ;  
     t m p c c e r   | =   ( u i n t 3 2 _ t ) ( T I M _ C C E R _ C C 1 E   |   T I M _ C C E R _ C C 2 E ) ;  
  
     / *   S e t   e n c o d e r   m o d e   * /  
     L L _ T I M _ S e t E n c o d e r M o d e ( T I M x ,   T I M _ E n c o d e r I n i t S t r u c t - > E n c o d e r M o d e ) ;  
  
     / *   W r i t e   t o   T I M x   C C M R 1   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C M R 1 ,   t m p c c m r 1 ) ;  
  
     / *   W r i t e   t o   T I M x   C C E R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C E R ,   t m p c c e r ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   f i e l d s   o f   t h e   T I M x   H a l l   s e n s o r   i n t e r f a c e   c o n f i g u r a t i o n   d a t a  
     *                   s t r u c t u r e   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     T I M _ H a l l S e n s o r I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ H A L L S E N S O R _ I n i t T y p e D e f   s t r u c t u r e   ( H A L L   s e n s o r   i n t e r f a c e  
     *                   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ T I M _ H A L L S E N S O R _ S t r u c t I n i t ( L L _ T I M _ H A L L S E N S O R _ I n i t T y p e D e f   * T I M _ H a l l S e n s o r I n i t S t r u c t )  
 {  
     / *   S e t   t h e   d e f a u l t   c o n f i g u r a t i o n   * /  
     T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 P o l a r i t y               =   L L _ T I M _ I C _ P O L A R I T Y _ R I S I N G ;  
     T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 P r e s c a l e r             =   L L _ T I M _ I C P S C _ D I V 1 ;  
     T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 F i l t e r                   =   L L _ T I M _ I C _ F I L T E R _ F D I V 1 ;  
     T I M _ H a l l S e n s o r I n i t S t r u c t - > C o m m u t a t i o n D e l a y     =   0 U ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   H a l l   s e n s o r   i n t e r f a c e   o f   t h e   t i m e r   i n s t a n c e .  
     *   @ n o t e   T I M x   C H 1 ,   C H 2   a n d   C H 3   i n p u t s   c o n n e c t e d   t h r o u g h   a   X O R  
     *               t o   t h e   T I 1   i n p u t   c h a n n e l  
     *   @ n o t e   T I M x   s l a v e   m o d e   c o n t r o l l e r   i s   c o n f i g u r e d   i n   r e s e t   m o d e .  
                     S e l e c t e d   i n t e r n a l   t r i g g e r   i s   T I 1 F _ E D .  
     *   @ n o t e   C h a n n e l   1   i s   c o n f i g u r e d   a s   i n p u t ,   I C 1   i s   m a p p e d   o n   T R C .  
     *   @ n o t e   C a p t u r e d   v a l u e   s t o r e d   i n   T I M x _ C C R 1   c o r r e s p o n d   t o   t h e   t i m e   e l a p s e d  
     *               b e t w e e n   2   c h a n g e s   o n   t h e   i n p u t s .   I t   g i v e s   i n f o r m a t i o n   a b o u t   m o t o r   s p e e d .  
     *   @ n o t e   C h a n n e l   2   i s   c o n f i g u r e d   i n   o u t p u t   P W M   2   m o d e .  
     *   @ n o t e   C o m p a r e   v a l u e   s t o r e d   i n   T I M x _ C C R 2   c o r r e s p o n d s   t o   t h e   c o m m u t a t i o n   d e l a y .  
     *   @ n o t e   O C 2 R E F   i s   s e l e c t e d   a s   t r i g g e r   o u t p u t   o n   T R G O .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ H a l l S e n s o r I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ H A L L S E N S O R _ I n i t T y p e D e f   s t r u c t u r e   ( T I M x   H A L L   s e n s o r  
     *                   i n t e r f a c e   c o n f i g u r a t i o n   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ T I M _ H A L L S E N S O R _ I n i t ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ H A L L S E N S O R _ I n i t T y p e D e f   * T I M _ H a l l S e n s o r I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c r 2 ;  
     u i n t 3 2 _ t   t m p c c m r 1 ;  
     u i n t 3 2 _ t   t m p c c e r ;  
     u i n t 3 2 _ t   t m p s m c r ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y _ E N C O D E R ( T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 F i l t e r ) ) ;  
  
     / *   D i s a b l e   t h e   C C 1   a n d   C C 2 :   R e s e t   t h e   C C 1 E   a n d   C C 2 E   B i t s   * /  
     T I M x - > C C E R   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C E R _ C C 1 E   |   T I M _ C C E R _ C C 2 E ) ;  
  
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * /  
     t m p c r 2   =   L L _ T I M _ R e a d R e g ( T I M x ,   C R 2 ) ;  
  
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * /  
     t m p c c m r 1   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C M R 1 ) ;  
  
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * /  
     t m p c c e r   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C E R ) ;  
  
     / *   G e t   t h e   T I M x   S M C R   r e g i s t e r   v a l u e   * /  
     t m p s m c r   =   L L _ T I M _ R e a d R e g ( T I M x ,   S M C R ) ;  
  
     / *   C o n n e c t   T I M x _ C H 1 ,   C H 2   a n d   C H 3   p i n s   t o   t h e   T I 1   i n p u t   * /  
     t m p c r 2   | =   T I M _ C R 2 _ T I 1 S ;  
  
     / *   O C 2 R E F   s i g n a l   i s   u s e d   a s   t r i g g e r   o u t p u t   ( T R G O )   * /  
     t m p c r 2   | =   L L _ T I M _ T R G O _ O C 2 R E F ;  
  
     / *   C o n f i g u r e   t h e   s l a v e   m o d e   c o n t r o l l e r   * /  
     t m p s m c r   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ S M C R _ T S   |   T I M _ S M C R _ S M S ) ;  
     t m p s m c r   | =   L L _ T I M _ T S _ T I 1 F _ E D ;  
     t m p s m c r   | =   L L _ T I M _ S L A V E M O D E _ R E S E T ;  
  
     / *   C o n f i g u r e   i n p u t   c h a n n e l   1   * /  
     t m p c c m r 1   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C M R 1 _ C C 1 S   |   T I M _ C C M R 1 _ I C 1 F     |   T I M _ C C M R 1 _ I C 1 P S C ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( L L _ T I M _ A C T I V E I N P U T _ T R C   > >   1 6 U ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 F i l t e r   > >   1 6 U ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 P r e s c a l e r   > >   1 6 U ) ;  
  
     / *   C o n f i g u r e   i n p u t   c h a n n e l   2   * /  
     t m p c c m r 1   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C M R 1 _ O C 2 M   |   T I M _ C C M R 1 _ O C 2 F E     |   T I M _ C C M R 1 _ O C 2 P E     |   T I M _ C C M R 1 _ O C 2 C E ) ;  
     t m p c c m r 1   | =   ( u i n t 3 2 _ t ) ( L L _ T I M _ O C M O D E _ P W M 2   < <   8 U ) ;  
  
     / *   S e t   C h a n n e l   1   p o l a r i t y   a n d   e n a b l e   C h a n n e l   1   a n d   C h a n n e l 2   * /  
     t m p c c e r   & =   ( u i n t 3 2 _ t ) ~ ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P   |   T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) ;  
     t m p c c e r   | =   ( u i n t 3 2 _ t ) ( T I M _ H a l l S e n s o r I n i t S t r u c t - > I C 1 P o l a r i t y ) ;  
     t m p c c e r   | =   ( u i n t 3 2 _ t ) ( T I M _ C C E R _ C C 1 E   |   T I M _ C C E R _ C C 2 E ) ;  
  
     / *   W r i t e   t o   T I M x   C R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C R 2 ,   t m p c r 2 ) ;  
  
     / *   W r i t e   t o   T I M x   S M C R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   S M C R ,   t m p s m c r ) ;  
  
     / *   W r i t e   t o   T I M x   C C M R 1   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C M R 1 ,   t m p c c m r 1 ) ;  
  
     / *   W r i t e   t o   T I M x   C C E R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C E R ,   t m p c c e r ) ;  
  
     / *   W r i t e   t o   T I M x   C C R 2   * /  
     L L _ T I M _ O C _ S e t C o m p a r e C H 2 ( T I M x ,   T I M _ H a l l S e n s o r I n i t S t r u c t - > C o m m u t a t i o n D e l a y ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   f i e l d s   o f   t h e   B r e a k   a n d   D e a d   T i m e   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *                   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     T I M _ B D T R I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ B D T R _ I n i t T y p e D e f   s t r u c t u r e   ( B r e a k   a n d   D e a d   T i m e   c o n f i g u r a t i o n  
     *                   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ T I M _ B D T R _ S t r u c t I n i t ( L L _ T I M _ B D T R _ I n i t T y p e D e f   * T I M _ B D T R I n i t S t r u c t )  
 {  
     / *   S e t   t h e   d e f a u l t   c o n f i g u r a t i o n   * /  
     T I M _ B D T R I n i t S t r u c t - > O S S R S t a t e               =   L L _ T I M _ O S S R _ D I S A B L E ;  
     T I M _ B D T R I n i t S t r u c t - > O S S I S t a t e               =   L L _ T I M _ O S S I _ D I S A B L E ;  
     T I M _ B D T R I n i t S t r u c t - > L o c k L e v e l               =   L L _ T I M _ L O C K L E V E L _ O F F ;  
     T I M _ B D T R I n i t S t r u c t - > D e a d T i m e                 =   ( u i n t 8 _ t ) 0 x 0 0 ;  
     T I M _ B D T R I n i t S t r u c t - > B r e a k S t a t e             =   L L _ T I M _ B R E A K _ D I S A B L E ;  
     T I M _ B D T R I n i t S t r u c t - > B r e a k P o l a r i t y       =   L L _ T I M _ B R E A K _ P O L A R I T Y _ L O W ;  
     T I M _ B D T R I n i t S t r u c t - > A u t o m a t i c O u t p u t   =   L L _ T I M _ A U T O M A T I C O U T P U T _ D I S A B L E ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   B r e a k   a n d   D e a d   T i m e   f e a t u r e   o f   t h e   t i m e r   i n s t a n c e .  
     *   @ n o t e   A s   t h e   b i t s   A O E ,   B K P ,   B K E ,   O S S R ,   O S S I   a n d   D T G [ 7 : 0 ]   c a n   b e   w r i t e - l o c k e d  
     *     d e p e n d i n g   o n   t h e   L O C K   c o n f i g u r a t i o n ,   i t   c a n   b e   n e c e s s a r y   t o   c o n f i g u r e   a l l   o f  
     *     t h e m   d u r i n g   t h e   f i r s t   w r i t e   a c c e s s   t o   t h e   T I M x _ B D T R   r e g i s t e r .  
     *   @ n o t e   M a c r o   I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x )   c a n   b e   u s e d   t o   c h e c k   w h e t h e r   o r   n o t  
     *               a   t i m e r   i n s t a n c e   p r o v i d e s   a   b r e a k   i n p u t .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ B D T R I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ T I M _ B D T R _ I n i t T y p e D e f   s t r u c t u r e   ( B r e a k   a n d   D e a d   T i m e   c o n f i g u r a t i o n  
     *                   d a t a   s t r u c t u r e )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   B r e a k   a n d   D e a d   T i m e   i s   i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ T I M _ B D T R _ I n i t ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ B D T R _ I n i t T y p e D e f   * T I M _ B D T R I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p b d t r   =   0 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O S S R _ S T A T E ( T I M _ B D T R I n i t S t r u c t - > O S S R S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O S S I _ S T A T E ( T I M _ B D T R I n i t S t r u c t - > O S S I S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ L O C K _ L E V E L ( T I M _ B D T R I n i t S t r u c t - > L o c k L e v e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ B R E A K _ S T A T E ( T I M _ B D T R I n i t S t r u c t - > B r e a k S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ B R E A K _ P O L A R I T Y ( T I M _ B D T R I n i t S t r u c t - > B r e a k P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A U T O M A T I C _ O U T P U T _ S T A T E ( T I M _ B D T R I n i t S t r u c t - > A u t o m a t i c O u t p u t ) ) ;  
  
     / *   S e t   t h e   L o c k   l e v e l ,   t h e   B r e a k   e n a b l e   B i t   a n d   t h e   P o l a r i t y ,   t h e   O S S R   S t a t e ,  
     t h e   O S S I   S t a t e ,   t h e   d e a d   t i m e   v a l u e   a n d   t h e   A u t o m a t i c   O u t p u t   E n a b l e   B i t   * /  
  
     / *   S e t   t h e   B D T R   b i t s   * /  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ D T G ,   T I M _ B D T R I n i t S t r u c t - > D e a d T i m e ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ L O C K ,   T I M _ B D T R I n i t S t r u c t - > L o c k L e v e l ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ O S S I ,   T I M _ B D T R I n i t S t r u c t - > O S S I S t a t e ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ O S S R ,   T I M _ B D T R I n i t S t r u c t - > O S S R S t a t e ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ B K E ,   T I M _ B D T R I n i t S t r u c t - > B r e a k S t a t e ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ B K P ,   T I M _ B D T R I n i t S t r u c t - > B r e a k P o l a r i t y ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ A O E ,   T I M _ B D T R I n i t S t r u c t - > A u t o m a t i c O u t p u t ) ;  
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ M O E ,   T I M _ B D T R I n i t S t r u c t - > A u t o m a t i c O u t p u t ) ;  
  
     / *   S e t   T I M x _ B D T R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   B D T R ,   t m p b d t r ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   T I M _ L L _ P r i v a t e _ F u n c t i o n s   T I M   P r i v a t e   F u n c t i o n s  
     *     @ b r i e f       P r i v a t e   f u n c t i o n s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   o u t p u t   c h a n n e l   1 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ O C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   o u t p u t   c h a n n e l   1   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   O C 1 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c c m r 1 ;  
     u i n t 3 2 _ t   t m p c c e r ;  
     u i n t 3 2 _ t   t m p c r 2 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C M O D E ( T I M _ O C I n i t S t r u c t - > O C M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C N S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   1 :   R e s e t   t h e   C C 1 E   B i t   * /  
     C L E A R _ B I T ( T I M x - > C C E R ,   T I M _ C C E R _ C C 1 E ) ;  
  
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * /  
     t m p c c e r   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C E R ) ;  
  
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * /  
     t m p c r 2   =   L L _ T I M _ R e a d R e g ( T I M x ,   C R 2 ) ;  
  
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * /  
     t m p c c m r 1   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C M R 1 ) ;  
  
     / *   R e s e t   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * /  
     C L E A R _ B I T ( t m p c c m r 1 ,   T I M _ C C M R 1 _ C C 1 S ) ;  
  
     / *   S e t   t h e   O u t p u t   C o m p a r e   M o d e   * /  
     M O D I F Y _ R E G ( t m p c c m r 1 ,   T I M _ C C M R 1 _ O C 1 M ,   T I M _ O C I n i t S t r u c t - > O C M o d e ) ;  
  
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 1 P ,   T I M _ O C I n i t S t r u c t - > O C P o l a r i t y ) ;  
  
     / *   S e t   t h e   O u t p u t   S t a t e   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 1 E ,   T I M _ O C I n i t S t r u c t - > O C S t a t e ) ;  
  
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) )  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e ) ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   P o l a r i t y   * /  
         M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 1 N P ,   T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y   < <   2 U ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   S t a t e   * /  
         M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 1 N E ,   T I M _ O C I n i t S t r u c t - > O C N S t a t e   < <   2 U ) ;  
  
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 1 ,   T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 1 N ,   T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e   < <   1 U ) ;  
     }  
  
     / *   W r i t e   t o   T I M x   C R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C R 2 ,   t m p c r 2 ) ;  
  
     / *   W r i t e   t o   T I M x   C C M R 1   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C M R 1 ,   t m p c c m r 1 ) ;  
  
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * /  
     L L _ T I M _ O C _ S e t C o m p a r e C H 1 ( T I M x ,   T I M _ O C I n i t S t r u c t - > C o m p a r e V a l u e ) ;  
  
     / *   W r i t e   t o   T I M x   C C E R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C E R ,   t m p c c e r ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   o u t p u t   c h a n n e l   2 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ O C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   o u t p u t   c h a n n e l   2   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   O C 2 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c c m r 1 ;  
     u i n t 3 2 _ t   t m p c c e r ;  
     u i n t 3 2 _ t   t m p c r 2 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C M O D E ( T I M _ O C I n i t S t r u c t - > O C M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C N S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   2 :   R e s e t   t h e   C C 2 E   B i t   * /  
     C L E A R _ B I T ( T I M x - > C C E R ,   T I M _ C C E R _ C C 2 E ) ;  
  
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * /  
     t m p c c e r   =     L L _ T I M _ R e a d R e g ( T I M x ,   C C E R ) ;  
  
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * /  
     t m p c r 2   =   L L _ T I M _ R e a d R e g ( T I M x ,   C R 2 ) ;  
  
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * /  
     t m p c c m r 1   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C M R 1 ) ;  
  
     / *   R e s e t   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * /  
     C L E A R _ B I T ( t m p c c m r 1 ,   T I M _ C C M R 1 _ C C 2 S ) ;  
  
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * /  
     M O D I F Y _ R E G ( t m p c c m r 1 ,   T I M _ C C M R 1 _ O C 2 M ,   T I M _ O C I n i t S t r u c t - > O C M o d e   < <   8 U ) ;  
  
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 2 P ,   T I M _ O C I n i t S t r u c t - > O C P o l a r i t y   < <   4 U ) ;  
  
     / *   S e t   t h e   O u t p u t   S t a t e   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 2 E ,   T I M _ O C I n i t S t r u c t - > O C S t a t e   < <   4 U ) ;  
  
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) )  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e ) ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   P o l a r i t y   * /  
         M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 2 N P ,   T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y   < <   6 U ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   S t a t e   * /  
         M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 2 N E ,   T I M _ O C I n i t S t r u c t - > O C N S t a t e   < <   6 U ) ;  
  
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 2 ,   T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e   < <   2 U ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 2 N ,   T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e   < <   3 U ) ;  
     }  
  
     / *   W r i t e   t o   T I M x   C R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C R 2 ,   t m p c r 2 ) ;  
  
     / *   W r i t e   t o   T I M x   C C M R 1   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C M R 1 ,   t m p c c m r 1 ) ;  
  
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * /  
     L L _ T I M _ O C _ S e t C o m p a r e C H 2 ( T I M x ,   T I M _ O C I n i t S t r u c t - > C o m p a r e V a l u e ) ;  
  
     / *   W r i t e   t o   T I M x   C C E R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C E R ,   t m p c c e r ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   o u t p u t   c h a n n e l   3 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ O C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   o u t p u t   c h a n n e l   3   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   O C 3 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c c m r 2 ;  
     u i n t 3 2 _ t   t m p c c e r ;  
     u i n t 3 2 _ t   t m p c r 2 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 3 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C M O D E ( T I M _ O C I n i t S t r u c t - > O C M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C N S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   3 :   R e s e t   t h e   C C 3 E   B i t   * /  
     C L E A R _ B I T ( T I M x - > C C E R ,   T I M _ C C E R _ C C 3 E ) ;  
  
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * /  
     t m p c c e r   =     L L _ T I M _ R e a d R e g ( T I M x ,   C C E R ) ;  
  
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * /  
     t m p c r 2   =   L L _ T I M _ R e a d R e g ( T I M x ,   C R 2 ) ;  
  
     / *   G e t   t h e   T I M x   C C M R 2   r e g i s t e r   v a l u e   * /  
     t m p c c m r 2   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C M R 2 ) ;  
  
     / *   R e s e t   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * /  
     C L E A R _ B I T ( t m p c c m r 2 ,   T I M _ C C M R 2 _ C C 3 S ) ;  
  
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * /  
     M O D I F Y _ R E G ( t m p c c m r 2 ,   T I M _ C C M R 2 _ O C 3 M ,   T I M _ O C I n i t S t r u c t - > O C M o d e ) ;  
  
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 3 P ,   T I M _ O C I n i t S t r u c t - > O C P o l a r i t y   < <   8 U ) ;  
  
     / *   S e t   t h e   O u t p u t   S t a t e   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 3 E ,   T I M _ O C I n i t S t r u c t - > O C S t a t e   < <   8 U ) ;  
  
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) )  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e ) ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   P o l a r i t y   * /  
         M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 3 N P ,   T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y   < <   1 0 U ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   S t a t e   * /  
         M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 3 N E ,   T I M _ O C I n i t S t r u c t - > O C N S t a t e   < <   1 0 U ) ;  
  
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 3 ,   T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e   < <   4 U ) ;  
  
         / *   S e t   t h e   c o m p l e m e n t a r y   o u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 3 N ,   T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e   < <   5 U ) ;  
     }  
  
     / *   W r i t e   t o   T I M x   C R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C R 2 ,   t m p c r 2 ) ;  
  
     / *   W r i t e   t o   T I M x   C C M R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C M R 2 ,   t m p c c m r 2 ) ;  
  
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * /  
     L L _ T I M _ O C _ S e t C o m p a r e C H 3 ( T I M x ,   T I M _ O C I n i t S t r u c t - > C o m p a r e V a l u e ) ;  
  
     / *   W r i t e   t o   T I M x   C C E R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C E R ,   t m p c c e r ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   o u t p u t   c h a n n e l   4 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ O C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   o u t p u t   c h a n n e l   4   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   O C 4 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ O C _ I n i t T y p e D e f   * T I M _ O C I n i t S t r u c t )  
 {  
     u i n t 3 2 _ t   t m p c c m r 2 ;  
     u i n t 3 2 _ t   t m p c c e r ;  
     u i n t 3 2 _ t   t m p c r 2 ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 4 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C M O D E ( T I M _ O C I n i t S t r u c t - > O C M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C S t a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C P O L A R I T Y ( T I M _ O C I n i t S t r u c t - > O C N P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C S T A T E ( T I M _ O C I n i t S t r u c t - > O C N S t a t e ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   4 :   R e s e t   t h e   C C 4 E   B i t   * /  
     C L E A R _ B I T ( T I M x - > C C E R ,   T I M _ C C E R _ C C 4 E ) ;  
  
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * /  
     t m p c c e r   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C E R ) ;  
  
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * /  
     t m p c r 2   =     L L _ T I M _ R e a d R e g ( T I M x ,   C R 2 ) ;  
  
     / *   G e t   t h e   T I M x   C C M R 2   r e g i s t e r   v a l u e   * /  
     t m p c c m r 2   =   L L _ T I M _ R e a d R e g ( T I M x ,   C C M R 2 ) ;  
  
     / *   R e s e t   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * /  
     C L E A R _ B I T ( t m p c c m r 2 ,   T I M _ C C M R 2 _ C C 4 S ) ;  
  
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * /  
     M O D I F Y _ R E G ( t m p c c m r 2 ,   T I M _ C C M R 2 _ O C 4 M ,   T I M _ O C I n i t S t r u c t - > O C M o d e   < <   8 U ) ;  
  
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 4 P ,   T I M _ O C I n i t S t r u c t - > O C P o l a r i t y   < <   1 2 U ) ;  
  
     / *   S e t   t h e   O u t p u t   S t a t e   * /  
     M O D I F Y _ R E G ( t m p c c e r ,   T I M _ C C E R _ C C 4 E ,   T I M _ O C I n i t S t r u c t - > O C S t a t e   < <   1 2 U ) ;  
  
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) )  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C N I d l e S t a t e ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ T I M _ O C I D L E S T A T E ( T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e ) ) ;  
  
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * /  
         M O D I F Y _ R E G ( t m p c r 2 ,   T I M _ C R 2 _ O I S 4 ,   T I M _ O C I n i t S t r u c t - > O C I d l e S t a t e   < <   6 U ) ;  
     }  
  
     / *   W r i t e   t o   T I M x   C R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C R 2 ,   t m p c r 2 ) ;  
  
     / *   W r i t e   t o   T I M x   C C M R 2   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C M R 2 ,   t m p c c m r 2 ) ;  
  
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * /  
     L L _ T I M _ O C _ S e t C o m p a r e C H 4 ( T I M x ,   T I M _ O C I n i t S t r u c t - > C o m p a r e V a l u e ) ;  
  
     / *   W r i t e   t o   T I M x   C C E R   * /  
     L L _ T I M _ W r i t e R e g ( T I M x ,   C C E R ,   t m p c c e r ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   i n p u t   c h a n n e l   1 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ I C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   i n p u t   c h a n n e l   1   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   I C 1 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A C T I V E I N P U T ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ I C I n i t S t r u c t - > I C F i l t e r ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   1 :   R e s e t   t h e   C C 1 E   B i t   * /  
     T I M x - > C C E R   & =   ( u i n t 3 2 _ t ) ~ T I M _ C C E R _ C C 1 E ;  
  
     / *   S e l e c t   t h e   I n p u t   a n d   s e t   t h e   f i l t e r   a n d   t h e   p r e s c a l e r   v a l u e   * /  
     M O D I F Y _ R E G ( T I M x - > C C M R 1 ,  
                           ( T I M _ C C M R 1 _ C C 1 S   |   T I M _ C C M R 1 _ I C 1 F   |   T I M _ C C M R 1 _ I C 1 P S C ) ,  
                           ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t   |   T I M _ I C I n i t S t r u c t - > I C F i l t e r   |   T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r )   > >   1 6 U ) ;  
  
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 1 E   B i t   * /  
     M O D I F Y _ R E G ( T I M x - > C C E R ,  
                           ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P ) ,  
                           ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y   |   T I M _ C C E R _ C C 1 E ) ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   i n p u t   c h a n n e l   2 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ I C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   i n p u t   c h a n n e l   2   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   I C 2 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A C T I V E I N P U T ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ I C I n i t S t r u c t - > I C F i l t e r ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   2 :   R e s e t   t h e   C C 2 E   B i t   * /  
     T I M x - > C C E R   & =   ( u i n t 3 2 _ t ) ~ T I M _ C C E R _ C C 2 E ;  
  
     / *   S e l e c t   t h e   I n p u t   a n d   s e t   t h e   f i l t e r   a n d   t h e   p r e s c a l e r   v a l u e   * /  
     M O D I F Y _ R E G ( T I M x - > C C M R 1 ,  
                           ( T I M _ C C M R 1 _ C C 2 S   |   T I M _ C C M R 1 _ I C 2 F   |   T I M _ C C M R 1 _ I C 2 P S C ) ,  
                           ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t   |   T I M _ I C I n i t S t r u c t - > I C F i l t e r   |   T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r )   > >   8 U ) ;  
  
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 2 E   B i t   * /  
     M O D I F Y _ R E G ( T I M x - > C C E R ,  
                           ( T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) ,  
                           ( ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y   < <   4 U )   |   T I M _ C C E R _ C C 2 E ) ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   i n p u t   c h a n n e l   3 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ I C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   i n p u t   c h a n n e l   3   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   I C 3 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 3 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A C T I V E I N P U T ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ I C I n i t S t r u c t - > I C F i l t e r ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   3 :   R e s e t   t h e   C C 3 E   B i t   * /  
     T I M x - > C C E R   & =   ( u i n t 3 2 _ t ) ~ T I M _ C C E R _ C C 3 E ;  
  
     / *   S e l e c t   t h e   I n p u t   a n d   s e t   t h e   f i l t e r   a n d   t h e   p r e s c a l e r   v a l u e   * /  
     M O D I F Y _ R E G ( T I M x - > C C M R 2 ,  
                           ( T I M _ C C M R 2 _ C C 3 S   |   T I M _ C C M R 2 _ I C 3 F   |   T I M _ C C M R 2 _ I C 3 P S C ) ,  
                           ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t   |   T I M _ I C I n i t S t r u c t - > I C F i l t e r   |   T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r )   > >   1 6 U ) ;  
  
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 3 E   B i t   * /  
     M O D I F Y _ R E G ( T I M x - > C C E R ,  
                           ( T I M _ C C E R _ C C 3 P   |   T I M _ C C E R _ C C 3 N P ) ,  
                           ( ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y   < <   8 U )   |   T I M _ C C E R _ C C 3 E ) ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   T I M x   i n p u t   c h a n n e l   4 .  
     *   @ p a r a m     T I M x   T i m e r   I n s t a n c e  
     *   @ p a r a m     T I M _ I C I n i t S t r u c t   p o i n t e r   t o   t h e   t h e   T I M x   i n p u t   c h a n n e l   4   c o n f i g u r a t i o n   d a t a   s t r u c t u r e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   T I M x   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 s t a t i c   E r r o r S t a t u s   I C 4 C o n f i g ( T I M _ T y p e D e f   * T I M x ,   L L _ T I M _ I C _ I n i t T y p e D e f   * T I M _ I C I n i t S t r u c t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ T I M _ C C 4 _ I N S T A N C E ( T I M x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ P O L A R I T Y ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ A C T I V E I N P U T ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C P S C ( T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ T I M _ I C _ F I L T E R ( T I M _ I C I n i t S t r u c t - > I C F i l t e r ) ) ;  
  
     / *   D i s a b l e   t h e   C h a n n e l   4 :   R e s e t   t h e   C C 4 E   B i t   * /  
     T I M x - > C C E R   & =   ( u i n t 3 2 _ t ) ~ T I M _ C C E R _ C C 4 E ;  
  
     / *   S e l e c t   t h e   I n p u t   a n d   s e t   t h e   f i l t e r   a n d   t h e   p r e s c a l e r   v a l u e   * /  
     M O D I F Y _ R E G ( T I M x - > C C M R 2 ,  
                           ( T I M _ C C M R 2 _ C C 4 S   |   T I M _ C C M R 2 _ I C 4 F   |   T I M _ C C M R 2 _ I C 4 P S C ) ,  
                           ( T I M _ I C I n i t S t r u c t - > I C A c t i v e I n p u t   |   T I M _ I C I n i t S t r u c t - > I C F i l t e r   |   T I M _ I C I n i t S t r u c t - > I C P r e s c a l e r )   > >   8 U ) ;  
  
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 4 E   B i t   * /  
     M O D I F Y _ R E G ( T I M x - > C C E R ,  
                           T I M _ C C E R _ C C 4 P ,  
                           ( ( T I M _ I C I n i t S t r u c t - > I C P o l a r i t y   < <   1 2 U )   |   T I M _ C C E R _ C C 4 E ) ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   T I M 1   | |   T I M 2   | |   T I M 3   | |   T I M 4   | |   T I M 5   | |   T I M 6   | |   T I M 7   | |   T I M 8   | |   T I M 9   | |   T I M 1 0   | |   T I M 1 1   | |   T I M 1 2   | |   T I M 1 3   | |   T I M 1 4     | |   T I M 1 5   | |   T I M 1 6   | |   T I M 1 7   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  