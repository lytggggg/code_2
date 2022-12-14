??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 _ h a l _ l e g a c y . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       T h i s   f i l e   c o n t a i n s   a l i a s e s   d e f i n i t i o n   f o r   t h e   S T M 3 2 C u b e   H A L   c o n s t a n t s 
     *                     m a c r o s   a n d   f u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e . 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 9   S T M i c r o e l e c t r o n i c s . 
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 > 
     * 
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e , 
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e 
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t : 
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e 
     * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     * / 
 
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i f n d e f   S T M 3 2 _ H A L _ L E G A C Y 
 # d e f i n e   S T M 3 2 _ H A L _ L E G A C Y 
 
 # i f d e f   _ _ c p l u s p l u s 
   e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   H A L _ A E S _ A l i a s e d _ D e f i n e s   H A L   C R Y P   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   A E S _ F L A G _ R D E R R                                     C R Y P _ F L A G _ R D E R R 
 # d e f i n e   A E S _ F L A G _ W R E R R                                     C R Y P _ F L A G _ W R E R R 
 # d e f i n e   A E S _ C L E A R F L A G _ C C F                               C R Y P _ C L E A R F L A G _ C C F 
 # d e f i n e   A E S _ C L E A R F L A G _ R D E R R                           C R Y P _ C L E A R F L A G _ R D E R R 
 # d e f i n e   A E S _ C L E A R F L A G _ W R E R R                           C R Y P _ C L E A R F L A G _ W R E R R 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ A D C _ A l i a s e d _ D e f i n e s   H A L   A D C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   A D C _ R E S O L U T I O N 1 2 b                               A D C _ R E S O L U T I O N _ 1 2 B 
 # d e f i n e   A D C _ R E S O L U T I O N 1 0 b                               A D C _ R E S O L U T I O N _ 1 0 B 
 # d e f i n e   A D C _ R E S O L U T I O N 8 b                                 A D C _ R E S O L U T I O N _ 8 B 
 # d e f i n e   A D C _ R E S O L U T I O N 6 b                                 A D C _ R E S O L U T I O N _ 6 B 
 # d e f i n e   O V R _ D A T A _ O V E R W R I T T E N                         A D C _ O V R _ D A T A _ O V E R W R I T T E N 
 # d e f i n e   O V R _ D A T A _ P R E S E R V E D                             A D C _ O V R _ D A T A _ P R E S E R V E D 
 # d e f i n e   E O C _ S I N G L E _ C O N V                                   A D C _ E O C _ S I N G L E _ C O N V 
 # d e f i n e   E O C _ S E Q _ C O N V                                         A D C _ E O C _ S E Q _ C O N V 
 # d e f i n e   E O C _ S I N G L E _ S E Q _ C O N V                           A D C _ E O C _ S I N G L E _ S E Q _ C O N V 
 # d e f i n e   R E G U L A R _ G R O U P                                       A D C _ R E G U L A R _ G R O U P 
 # d e f i n e   I N J E C T E D _ G R O U P                                     A D C _ I N J E C T E D _ G R O U P 
 # d e f i n e   R E G U L A R _ I N J E C T E D _ G R O U P                     A D C _ R E G U L A R _ I N J E C T E D _ G R O U P 
 # d e f i n e   A W D _ E V E N T                                               A D C _ A W D _ E V E N T 
 # d e f i n e   A W D 1 _ E V E N T                                             A D C _ A W D 1 _ E V E N T 
 # d e f i n e   A W D 2 _ E V E N T                                             A D C _ A W D 2 _ E V E N T 
 # d e f i n e   A W D 3 _ E V E N T                                             A D C _ A W D 3 _ E V E N T 
 # d e f i n e   O V R _ E V E N T                                               A D C _ O V R _ E V E N T 
 # d e f i n e   J Q O V F _ E V E N T                                           A D C _ J Q O V F _ E V E N T 
 # d e f i n e   A L L _ C H A N N E L S                                         A D C _ A L L _ C H A N N E L S 
 # d e f i n e   R E G U L A R _ C H A N N E L S                                 A D C _ R E G U L A R _ C H A N N E L S 
 # d e f i n e   I N J E C T E D _ C H A N N E L S                               A D C _ I N J E C T E D _ C H A N N E L S 
 # d e f i n e   S Y S C F G _ F L A G _ S E N S O R _ A D C                     A D C _ F L A G _ S E N S O R 
 # d e f i n e   S Y S C F G _ F L A G _ V R E F _ A D C                         A D C _ F L A G _ V R E F I N T 
 # d e f i n e   A D C _ C L O C K P R E S C A L E R _ P C L K _ D I V 1         A D C _ C L O C K _ S Y N C _ P C L K _ D I V 1 
 # d e f i n e   A D C _ C L O C K P R E S C A L E R _ P C L K _ D I V 2         A D C _ C L O C K _ S Y N C _ P C L K _ D I V 2 
 # d e f i n e   A D C _ C L O C K P R E S C A L E R _ P C L K _ D I V 4         A D C _ C L O C K _ S Y N C _ P C L K _ D I V 4 
 # d e f i n e   A D C _ C L O C K P R E S C A L E R _ P C L K _ D I V 6         A D C _ C L O C K _ S Y N C _ P C L K _ D I V 6 
 # d e f i n e   A D C _ C L O C K P R E S C A L E R _ P C L K _ D I V 8         A D C _ C L O C K _ S Y N C _ P C L K _ D I V 8 
 # d e f i n e   A D C _ E X T E R N A L T R I G 0 _ T 6 _ T R G O               A D C _ E X T E R N A L T R I G C O N V _ T 6 _ T R G O 
 # d e f i n e   A D C _ E X T E R N A L T R I G 1 _ T 2 1 _ C C 2               A D C _ E X T E R N A L T R I G C O N V _ T 2 1 _ C C 2 
 # d e f i n e   A D C _ E X T E R N A L T R I G 2 _ T 2 _ T R G O               A D C _ E X T E R N A L T R I G C O N V _ T 2 _ T R G O 
 # d e f i n e   A D C _ E X T E R N A L T R I G 3 _ T 2 _ C C 4                 A D C _ E X T E R N A L T R I G C O N V _ T 2 _ C C 4 
 # d e f i n e   A D C _ E X T E R N A L T R I G 4 _ T 2 2 _ T R G O             A D C _ E X T E R N A L T R I G C O N V _ T 2 2 _ T R G O 
 # d e f i n e   A D C _ E X T E R N A L T R I G 7 _ E X T _ I T 1 1             A D C _ E X T E R N A L T R I G C O N V _ E X T _ I T 1 1 
 # d e f i n e   A D C _ C L O C K _ A S Y N C                                   A D C _ C L O C K _ A S Y N C _ D I V 1 
 # d e f i n e   A D C _ E X T E R N A L T R I G _ E D G E _ N O N E             A D C _ E X T E R N A L T R I G C O N V E D G E _ N O N E 
 # d e f i n e   A D C _ E X T E R N A L T R I G _ E D G E _ R I S I N G         A D C _ E X T E R N A L T R I G C O N V E D G E _ R I S I N G 
 # d e f i n e   A D C _ E X T E R N A L T R I G _ E D G E _ F A L L I N G       A D C _ E X T E R N A L T R I G C O N V E D G E _ F A L L I N G 
 # d e f i n e   A D C _ E X T E R N A L T R I G _ E D G E _ R I S I N G F A L L I N G   A D C _ E X T E R N A L T R I G C O N V E D G E _ R I S I N G F A L L I N G 
 # d e f i n e   A D C _ S A M P L E T I M E _ 2 C Y C L E _ 5                   A D C _ S A M P L E T I M E _ 2 C Y C L E S _ 5 
 
 # d e f i n e   H A L _ A D C _ S T A T E _ B U S Y _ R E G                     H A L _ A D C _ S T A T E _ R E G _ B U S Y 
 # d e f i n e   H A L _ A D C _ S T A T E _ B U S Y _ I N J                     H A L _ A D C _ S T A T E _ I N J _ B U S Y 
 # d e f i n e   H A L _ A D C _ S T A T E _ E O C _ R E G                       H A L _ A D C _ S T A T E _ R E G _ E O C 
 # d e f i n e   H A L _ A D C _ S T A T E _ E O C _ I N J                       H A L _ A D C _ S T A T E _ I N J _ E O C 
 # d e f i n e   H A L _ A D C _ S T A T E _ E R R O R                           H A L _ A D C _ S T A T E _ E R R O R _ I N T E R N A L 
 # d e f i n e   H A L _ A D C _ S T A T E _ B U S Y                             H A L _ A D C _ S T A T E _ B U S Y _ I N T E R N A L 
 # d e f i n e   H A L _ A D C _ S T A T E _ A W D                               H A L _ A D C _ S T A T E _ A W D 1 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   A D C _ C H A N N E L _ V B A T _ D I V 4                       A D C _ C H A N N E L _ V B A T 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ C E C _ A l i a s e d _ D e f i n e s   H A L   C E C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ H A L _ C E C _ G E T _ I T   _ _ H A L _ C E C _ G E T _ F L A G 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ C O M P _ A l i a s e d _ D e f i n e s   H A L   C O M P   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   C O M P _ W I N D O W M O D E _ D I S A B L E D               C O M P _ W I N D O W M O D E _ D I S A B L E 
 # d e f i n e   C O M P _ W I N D O W M O D E _ E N A B L E D                 C O M P _ W I N D O W M O D E _ E N A B L E 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 1 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 1 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 2 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 2 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 3 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 3 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 4 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 4 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 5 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 5 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 6 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 6 
 # d e f i n e   C O M P _ E X T I _ L I N E _ C O M P 7 _ E V E N T           C O M P _ E X T I _ L I N E _ C O M P 7 
 # i f   d e f i n e d ( S T M 3 2 L 0 ) 
 # d e f i n e   C O M P _ L P T I M C O N N E C T I O N _ E N A B L E D       ( ( u i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 0 3 U )         / * ! <   C O M P X   o u t p u t   g e n e r i c   n a m i n g :   c o n n e c t e d   t o   L P T I M   i n p u t   1   f o r   C O M P 1 ,   L P T I M   i n p u t   2   f o r   C O M P 2   * / 
 # e n d i f 
 # d e f i n e   C O M P _ O U T P U T _ C O M P 6 T I M 2 O C R E F C L R     C O M P _ O U T P U T _ C O M P 6 _ T I M 2 O C R E F C L R 
 # i f   d e f i n e d ( S T M 3 2 F 3 7 3 x C )   | |   d e f i n e d ( S T M 3 2 F 3 7 8 x x ) 
 # d e f i n e   C O M P _ O U T P U T _ T I M 3 I C 1                         C O M P _ O U T P U T _ C O M P 1 _ T I M 3 I C 1 
 # d e f i n e   C O M P _ O U T P U T _ T I M 3 O C R E F C L R               C O M P _ O U T P U T _ C O M P 1 _ T I M 3 O C R E F C L R 
 # e n d i f   / *   S T M 3 2 F 3 7 3 x C   | |   S T M 3 2 F 3 7 8 x x   * / 
 
 # i f   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 ) 
 # d e f i n e   C O M P _ W I N D O W M O D E _ E N A B L E                   C O M P _ W I N D O W M O D E _ C O M P 1 _ I N P U T _ P L U S _ C O M M O N 
 
 # d e f i n e   C O M P _ N O N I N V E R T I N G I N P U T _ I O 1             C O M P _ I N P U T _ P L U S _ I O 1 
 # d e f i n e   C O M P _ N O N I N V E R T I N G I N P U T _ I O 2             C O M P _ I N P U T _ P L U S _ I O 2 
 # d e f i n e   C O M P _ N O N I N V E R T I N G I N P U T _ I O 3             C O M P _ I N P U T _ P L U S _ I O 3 
 # d e f i n e   C O M P _ N O N I N V E R T I N G I N P U T _ I O 4             C O M P _ I N P U T _ P L U S _ I O 4 
 # d e f i n e   C O M P _ N O N I N V E R T I N G I N P U T _ I O 5             C O M P _ I N P U T _ P L U S _ I O 5 
 # d e f i n e   C O M P _ N O N I N V E R T I N G I N P U T _ I O 6             C O M P _ I N P U T _ P L U S _ I O 6 
 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ 1 _ 4 V R E F I N T     C O M P _ I N P U T _ M I N U S _ 1 _ 4 V R E F I N T 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ 1 _ 2 V R E F I N T     C O M P _ I N P U T _ M I N U S _ 1 _ 2 V R E F I N T 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ 3 _ 4 V R E F I N T     C O M P _ I N P U T _ M I N U S _ 3 _ 4 V R E F I N T 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ V R E F I N T           C O M P _ I N P U T _ M I N U S _ V R E F I N T 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ D A C 1 _ C H 1         C O M P _ I N P U T _ M I N U S _ D A C 1 _ C H 1 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ D A C 1 _ C H 2         C O M P _ I N P U T _ M I N U S _ D A C 1 _ C H 2 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ D A C 1                 C O M P _ I N P U T _ M I N U S _ D A C 1 _ C H 1 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ D A C 2                 C O M P _ I N P U T _ M I N U S _ D A C 1 _ C H 2 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 1                   C O M P _ I N P U T _ M I N U S _ I O 1 
 # i f   d e f i n e d ( S T M 3 2 L 0 ) 
 / *   I s s u e   f i x e d   o n   S T M 3 2 L 0   C O M P   d r i v e r :   o n l y   2   d e d i c a t e d   I O   ( I O 1   a n d   I O 2 ) ,           * / 
 / *   I O 2   w a s   w r o n g l y   a s s i g n e d   t o   I O   s h a r e d   w i t h   D A C   a n d   I O 3   w a s   c o r r e s p o n d i n g       * / 
 / *   t o   t h e   s e c o n d   d e d i c a t e d   I O   ( o n l y   f o r   C O M P 2 ) .                                                               * / 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 2                   C O M P _ I N P U T _ M I N U S _ D A C 1 _ C H 2 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 3                   C O M P _ I N P U T _ M I N U S _ I O 2 
 # e l s e 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 2                   C O M P _ I N P U T _ M I N U S _ I O 2 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 3                   C O M P _ I N P U T _ M I N U S _ I O 3 
 # e n d i f 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 4                   C O M P _ I N P U T _ M I N U S _ I O 4 
 # d e f i n e   C O M P _ I N V E R T I N G I N P U T _ I O 5                   C O M P _ I N P U T _ M I N U S _ I O 5 
 
 # d e f i n e   C O M P _ O U T P U T L E V E L _ L O W                         C O M P _ O U T P U T _ L E V E L _ L O W 
 # d e f i n e   C O M P _ O U T P U T L E V E L _ H I G H                       C O M P _ O U T P U T _ L E V E L _ H I G H 
 
 / *   N o t e :   L i t e r a l   " C O M P _ F L A G _ L O C K "   k e p t   f o r   l e g a c y   p u r p o s e .                                         * / 
 / *               T o   c h e c k   C O M P   l o c k   s t a t e ,   u s e   m a c r o   " _ _ H A L _ C O M P _ I S _ L O C K E D ( ) " .                 * / 
 # i f   d e f i n e d ( C O M P _ C S R _ L O C K ) 
 # d e f i n e   C O M P _ F L A G _ L O C K                                   C O M P _ C S R _ L O C K 
 # e l i f   d e f i n e d ( C O M P _ C S R _ C O M P 1 L O C K ) 
 # d e f i n e   C O M P _ F L A G _ L O C K                                   C O M P _ C S R _ C O M P 1 L O C K 
 # e l i f   d e f i n e d ( C O M P _ C S R _ C O M P x L O C K ) 
 # d e f i n e   C O M P _ F L A G _ L O C K                                   C O M P _ C S R _ C O M P x L O C K 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 ) 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ T I M 1 O C 5                 C O M P _ B L A N K I N G S R C _ T I M 1 _ O C 5 _ C O M P 1 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ T I M 2 O C 3                 C O M P _ B L A N K I N G S R C _ T I M 2 _ O C 3 _ C O M P 1 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ T I M 3 O C 3                 C O M P _ B L A N K I N G S R C _ T I M 3 _ O C 3 _ C O M P 1 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ T I M 3 O C 4                 C O M P _ B L A N K I N G S R C _ T I M 3 _ O C 4 _ C O M P 2 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ T I M 8 O C 5                 C O M P _ B L A N K I N G S R C _ T I M 8 _ O C 5 _ C O M P 2 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ T I M 1 5 O C 1               C O M P _ B L A N K I N G S R C _ T I M 1 5 _ O C 1 _ C O M P 2 
 # d e f i n e   C O M P _ B L A N K I N G S R C E _ N O N E                       C O M P _ B L A N K I N G S R C _ N O N E 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 L 0 ) 
 # d e f i n e   C O M P _ M O D E _ H I G H S P E E D                             C O M P _ P O W E R M O D E _ M E D I U M S P E E D 
 # d e f i n e   C O M P _ M O D E _ L O W S P E E D                               C O M P _ P O W E R M O D E _ U L T R A L O W P O W E R 
 # e l s e 
 # d e f i n e   C O M P _ M O D E _ H I G H S P E E D                             C O M P _ P O W E R M O D E _ H I G H S P E E D 
 # d e f i n e   C O M P _ M O D E _ M E D I U M S P E E D                         C O M P _ P O W E R M O D E _ M E D I U M S P E E D 
 # d e f i n e   C O M P _ M O D E _ L O W P O W E R                               C O M P _ P O W E R M O D E _ L O W P O W E R 
 # d e f i n e   C O M P _ M O D E _ U L T R A L O W P O W E R                     C O M P _ P O W E R M O D E _ U L T R A L O W P O W E R 
 # e n d i f 
 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ C O R T E X _ A l i a s e d _ D e f i n e s   H A L   C O R T E X   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ C O R T E X _ S Y S T I C K C L K _ C O N F I G   H A L _ S Y S T I C K _ C L K S o u r c e C o n f i g 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ C R C _ A l i a s e d _ D e f i n e s   H A L   C R C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   C R C _ O U T P U T D A T A _ I N V E R S I O N _ D I S A B L E D         C R C _ O U T P U T D A T A _ I N V E R S I O N _ D I S A B L E 
 # d e f i n e   C R C _ O U T P U T D A T A _ I N V E R S I O N _ E N A B L E D           C R C _ O U T P U T D A T A _ I N V E R S I O N _ E N A B L E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ D A C _ A l i a s e d _ D e f i n e s   H A L   D A C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   D A C 1 _ C H A N N E L _ 1                                                                     D A C _ C H A N N E L _ 1 
 # d e f i n e   D A C 1 _ C H A N N E L _ 2                                                                     D A C _ C H A N N E L _ 2 
 # d e f i n e   D A C 2 _ C H A N N E L _ 1                                                                     D A C _ C H A N N E L _ 1 
 # d e f i n e   D A C _ W A V E _ N O N E                                                                       0 x 0 0 0 0 0 0 0 0 U 
 # d e f i n e   D A C _ W A V E _ N O I S E                                                                     D A C _ C R _ W A V E 1 _ 0 
 # d e f i n e   D A C _ W A V E _ T R I A N G L E                                                               D A C _ C R _ W A V E 1 _ 1 
 # d e f i n e   D A C _ W A V E G E N E R A T I O N _ N O N E                                                   D A C _ W A V E _ N O N E 
 # d e f i n e   D A C _ W A V E G E N E R A T I O N _ N O I S E                                                 D A C _ W A V E _ N O I S E 
 # d e f i n e   D A C _ W A V E G E N E R A T I O N _ T R I A N G L E                                           D A C _ W A V E _ T R I A N G L E 
 
 # i f   d e f i n e d ( S T M 3 2 G 4 )   | |   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   D A C _ C H I P C O N N E C T _ D I S A B L E               D A C _ C H I P C O N N E C T _ E X T E R N A L 
 # d e f i n e   D A C _ C H I P C O N N E C T _ E N A B L E                 D A C _ C H I P C O N N E C T _ I N T E R N A L 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 L 1 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 G 0 )   | |   d e f i n e d ( S T M 3 2 L 5 )   | |   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 G 4 ) 
 # d e f i n e   H A L _ D A C _ M S P _ I N I T _ C B _ I D               H A L _ D A C _ M S P I N I T _ C B _ I D 
 # d e f i n e   H A L _ D A C _ M S P _ D E I N I T _ C B _ I D           H A L _ D A C _ M S P D E I N I T _ C B _ I D 
 # e n d i f 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ D M A _ A l i a s e d _ D e f i n e s   H A L   D M A   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ R E M A P D M A _ A D C _ D M A _ C H 2                                 D M A _ R E M A P _ A D C _ D M A _ C H 2 
 # d e f i n e   H A L _ R E M A P D M A _ U S A R T 1 _ T X _ D M A _ C H 4                     D M A _ R E M A P _ U S A R T 1 _ T X _ D M A _ C H 4 
 # d e f i n e   H A L _ R E M A P D M A _ U S A R T 1 _ R X _ D M A _ C H 5                     D M A _ R E M A P _ U S A R T 1 _ R X _ D M A _ C H 5 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 1 6 _ D M A _ C H 4                             D M A _ R E M A P _ T I M 1 6 _ D M A _ C H 4 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 1 7 _ D M A _ C H 2                             D M A _ R E M A P _ T I M 1 7 _ D M A _ C H 2 
 # d e f i n e   H A L _ R E M A P D M A _ U S A R T 3 _ D M A _ C H 3 2                         D M A _ R E M A P _ U S A R T 3 _ D M A _ C H 3 2 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 1 6 _ D M A _ C H 6                             D M A _ R E M A P _ T I M 1 6 _ D M A _ C H 6 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 1 7 _ D M A _ C H 7                             D M A _ R E M A P _ T I M 1 7 _ D M A _ C H 7 
 # d e f i n e   H A L _ R E M A P D M A _ S P I 2 _ D M A _ C H 6 7                             D M A _ R E M A P _ S P I 2 _ D M A _ C H 6 7 
 # d e f i n e   H A L _ R E M A P D M A _ U S A R T 2 _ D M A _ C H 6 7                         D M A _ R E M A P _ U S A R T 2 _ D M A _ C H 6 7 
 # d e f i n e   H A L _ R E M A P D M A _ I 2 C 1 _ D M A _ C H 7 6                             D M A _ R E M A P _ I 2 C 1 _ D M A _ C H 7 6 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 1 _ D M A _ C H 6                               D M A _ R E M A P _ T I M 1 _ D M A _ C H 6 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 2 _ D M A _ C H 7                               D M A _ R E M A P _ T I M 2 _ D M A _ C H 7 
 # d e f i n e   H A L _ R E M A P D M A _ T I M 3 _ D M A _ C H 6                               D M A _ R E M A P _ T I M 3 _ D M A _ C H 6 
 
 # d e f i n e   I S _ H A L _ R E M A P D M A                                                     I S _ D M A _ R E M A P 
 # d e f i n e   _ _ H A L _ R E M A P D M A _ C H A N N E L _ E N A B L E                         _ _ H A L _ D M A _ R E M A P _ C H A N N E L _ E N A B L E 
 # d e f i n e   _ _ H A L _ R E M A P D M A _ C H A N N E L _ D I S A B L E                       _ _ H A L _ D M A _ R E M A P _ C H A N N E L _ D I S A B L E 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 ) 
 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 0                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 0 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 2                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 2 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 3                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 3 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 4                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 4 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 5                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 5 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 6                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 6 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 7                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 7 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 8                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 8 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 9                         H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 9 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1 0                       H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 0 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1 1                       H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 1 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1 2                       H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 2 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1 3                       H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 3 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1 4                       H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 4 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 1 5                       H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 1 5 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 0 _ E V T     H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 0 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 1 _ E V T     H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 1 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 2 _ E V T     H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 2 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 3 _ E V T     H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 3 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ L P T I M 1 _ O U T               H A L _ D M A M U X 1 _ R E Q _ G E N _ L P T I M 1 _ O U T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ L P T I M 2 _ O U T               H A L _ D M A M U X 1 _ R E Q _ G E N _ L P T I M 2 _ O U T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D S I _ T E                       H A L _ D M A M U X 1 _ R E Q _ G E N _ D S I _ T E 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D S I _ E O T                     H A L _ D M A M U X 1 _ R E Q _ G E N _ D S I _ E O T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A 2 D _ E O T                 H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A 2 D _ E O T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ L T D C _ I T                     H A L _ D M A M U X 1 _ R E Q _ G E N _ L T D C _ I T 
 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ N O _ E V E N T                     H A L _ D M A M U X _ R E Q _ G E N _ N O _ E V E N T 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ R I S I N G                         H A L _ D M A M U X _ R E Q _ G E N _ R I S I N G 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ F A L L I N G                       H A L _ D M A M U X _ R E Q _ G E N _ F A L L I N G 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ R I S I N G _ F A L L I N G         H A L _ D M A M U X _ R E Q _ G E N _ R I S I N G _ F A L L I N G 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 R 5 x x )   | |   d e f i n e d ( S T M 3 2 L 4 R 9 x x )   | |   d e f i n e d ( S T M 3 2 L 4 R 9 x x )   | |   d e f i n e d ( S T M 3 2 L 4 S 5 x x )   | |   d e f i n e d ( S T M 3 2 L 4 S 7 x x )   | |   d e f i n e d ( S T M 3 2 L 4 S 9 x x ) 
 # d e f i n e   D M A _ R E Q U E S T _ D C M I _ P S S I                                         D M A _ R E Q U E S T _ D C M I 
 # e n d i f 
 
 # e n d i f   / *   S T M 3 2 L 4   * / 
 
 # i f   d e f i n e d ( S T M 3 2 G 0 ) 
 # d e f i n e   D M A _ R E Q U E S T _ D A C 1 _ C H A N N E L 1                                 D M A _ R E Q U E S T _ D A C 1 _ C H 1 
 # d e f i n e   D M A _ R E Q U E S T _ D A C 1 _ C H A N N E L 2                                 D M A _ R E Q U E S T _ D A C 1 _ C H 2 
 # d e f i n e   D M A _ R E Q U E S T _ T I M 1 6 _ T R I G _ C O M                               D M A _ R E Q U E S T _ T I M 1 6 _ C O M 
 # d e f i n e   D M A _ R E Q U E S T _ T I M 1 7 _ T R I G _ C O M                               D M A _ R E Q U E S T _ T I M 1 7 _ C O M 
 
 # d e f i n e   L L _ D M A M U X _ R E Q _ T I M 1 6 _ T R I G _ C O M                           L L _ D M A M U X _ R E Q _ T I M 1 6 _ C O M 
 # d e f i n e   L L _ D M A M U X _ R E Q _ T I M 1 7 _ T R I G _ C O M                           L L _ D M A M U X _ R E Q _ T I M 1 7 _ C O M 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 
 # d e f i n e   D M A _ R E Q U E S T _ D A C 1   D M A _ R E Q U E S T _ D A C 1 _ C H 1 
 # d e f i n e   D M A _ R E Q U E S T _ D A C 2   D M A _ R E Q U E S T _ D A C 1 _ C H 2 
 
 # d e f i n e   B D M A _ R E Q U E S T _ L P _ U A R T 1 _ R X   B D M A _ R E Q U E S T _ L P U A R T 1 _ R X 
 # d e f i n e   B D M A _ R E Q U E S T _ L P _ U A R T 1 _ T X   B D M A _ R E Q U E S T _ L P U A R T 1 _ T X 
 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 0 _ E V T         H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 0 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 1 _ E V T         H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 1 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ D M A M U X 1 _ C H 2 _ E V T         H A L _ D M A M U X 1 _ R E Q _ G E N _ D M A M U X 1 _ C H 2 _ E V T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ L P T I M 1 _ O U T                   H A L _ D M A M U X 1 _ R E Q _ G E N _ L P T I M 1 _ O U T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ L P T I M 2 _ O U T                   H A L _ D M A M U X 1 _ R E Q _ G E N _ L P T I M 2 _ O U T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ L P T I M 3 _ O U T                   H A L _ D M A M U X 1 _ R E Q _ G E N _ L P T I M 3 _ O U T 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ E X T I 0                             H A L _ D M A M U X 1 _ R E Q _ G E N _ E X T I 0 
 # d e f i n e   H A L _ D M A M U X 1 _ R E Q U E S T _ G E N _ T I M 1 2 _ T R G O                   H A L _ D M A M U X 1 _ R E Q _ G E N _ T I M 1 2 _ T R G O 
 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 0 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 0 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 1 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 1 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 2 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 2 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 3 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 3 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 4 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 4 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 5 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 5 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ D M A M U X 2 _ C H 6 _ E V T         H A L _ D M A M U X 2 _ R E Q _ G E N _ D M A M U X 2 _ C H 6 _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P U A R T 1 _ R X _ W K U P         H A L _ D M A M U X 2 _ R E Q _ G E N _ L P U A R T 1 _ R X _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P U A R T 1 _ T X _ W K U P         H A L _ D M A M U X 2 _ R E Q _ G E N _ L P U A R T 1 _ T X _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P T I M 2 _ W K U P                 H A L _ D M A M U X 2 _ R E Q _ G E N _ L P T I M 2 _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P T I M 2 _ O U T                   H A L _ D M A M U X 2 _ R E Q _ G E N _ L P T I M 2 _ O U T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P T I M 3 _ W K U P                 H A L _ D M A M U X 2 _ R E Q _ G E N _ L P T I M 3 _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P T I M 3 _ O U T                   H A L _ D M A M U X 2 _ R E Q _ G E N _ L P T I M 3 _ O U T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P T I M 4 _ W K U P                 H A L _ D M A M U X 2 _ R E Q _ G E N _ L P T I M 4 _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P T I M 5 _ W K U P                 H A L _ D M A M U X 2 _ R E Q _ G E N _ L P T I M 5 _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ I 2 C 4 _ W K U P                     H A L _ D M A M U X 2 _ R E Q _ G E N _ I 2 C 4 _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ S P I 6 _ W K U P                     H A L _ D M A M U X 2 _ R E Q _ G E N _ S P I 6 _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ C O M P 1 _ O U T                     H A L _ D M A M U X 2 _ R E Q _ G E N _ C O M P 1 _ O U T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ C O M P 2 _ O U T                     H A L _ D M A M U X 2 _ R E Q _ G E N _ C O M P 2 _ O U T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ R T C _ W K U P                       H A L _ D M A M U X 2 _ R E Q _ G E N _ R T C _ W K U P 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ E X T I 0                             H A L _ D M A M U X 2 _ R E Q _ G E N _ E X T I 0 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ E X T I 2                             H A L _ D M A M U X 2 _ R E Q _ G E N _ E X T I 2 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ I 2 C 4 _ I T _ E V T                 H A L _ D M A M U X 2 _ R E Q _ G E N _ I 2 C 4 _ I T _ E V T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ S P I 6 _ I T                         H A L _ D M A M U X 2 _ R E Q _ G E N _ S P I 6 _ I T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P U A R T 1 _ T X _ I T             H A L _ D M A M U X 2 _ R E Q _ G E N _ L P U A R T 1 _ T X _ I T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ L P U A R T 1 _ R X _ I T             H A L _ D M A M U X 2 _ R E Q _ G E N _ L P U A R T 1 _ R X _ I T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ A D C 3 _ I T                         H A L _ D M A M U X 2 _ R E Q _ G E N _ A D C 3 _ I T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ A D C 3 _ A W D 1 _ O U T             H A L _ D M A M U X 2 _ R E Q _ G E N _ A D C 3 _ A W D 1 _ O U T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ B D M A _ C H 0 _ I T                 H A L _ D M A M U X 2 _ R E Q _ G E N _ B D M A _ C H 0 _ I T 
 # d e f i n e   H A L _ D M A M U X 2 _ R E Q U E S T _ G E N _ B D M A _ C H 1 _ I T                 H A L _ D M A M U X 2 _ R E Q _ G E N _ B D M A _ C H 1 _ I T 
 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ N O _ E V E N T                         H A L _ D M A M U X _ R E Q _ G E N _ N O _ E V E N T 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ R I S I N G                             H A L _ D M A M U X _ R E Q _ G E N _ R I S I N G 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ F A L L I N G                           H A L _ D M A M U X _ R E Q _ G E N _ F A L L I N G 
 # d e f i n e   H A L _ D M A M U X _ R E Q U E S T _ G E N _ R I S I N G _ F A L L I N G             H A L _ D M A M U X _ R E Q _ G E N _ R I S I N G _ F A L L I N G 
 
 # d e f i n e   D F S D M _ F I L T E R _ E X T _ T R I G _ L P T I M 1                               D F S D M _ F I L T E R _ E X T _ T R I G _ L P T I M 1 _ O U T 
 # d e f i n e   D F S D M _ F I L T E R _ E X T _ T R I G _ L P T I M 2                               D F S D M _ F I L T E R _ E X T _ T R I G _ L P T I M 2 _ O U T 
 # d e f i n e   D F S D M _ F I L T E R _ E X T _ T R I G _ L P T I M 3                               D F S D M _ F I L T E R _ E X T _ T R I G _ L P T I M 3 _ O U T 
 
 # d e f i n e   D A C _ T R I G G E R _ L P 1 _ O U T                                                 D A C _ T R I G G E R _ L P T I M 1 _ O U T 
 # d e f i n e   D A C _ T R I G G E R _ L P 2 _ O U T                                                 D A C _ T R I G G E R _ L P T I M 2 _ O U T 
 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ F L A S H _ A l i a s e d _ D e f i n e s   H A L   F L A S H   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   T Y P E P R O G R A M _ B Y T E                             F L A S H _ T Y P E P R O G R A M _ B Y T E 
 # d e f i n e   T Y P E P R O G R A M _ H A L F W O R D                     F L A S H _ T Y P E P R O G R A M _ H A L F W O R D 
 # d e f i n e   T Y P E P R O G R A M _ W O R D                             F L A S H _ T Y P E P R O G R A M _ W O R D 
 # d e f i n e   T Y P E P R O G R A M _ D O U B L E W O R D                 F L A S H _ T Y P E P R O G R A M _ D O U B L E W O R D 
 # d e f i n e   T Y P E E R A S E _ S E C T O R S                           F L A S H _ T Y P E E R A S E _ S E C T O R S 
 # d e f i n e   T Y P E E R A S E _ P A G E S                               F L A S H _ T Y P E E R A S E _ P A G E S 
 # d e f i n e   T Y P E E R A S E _ P A G E E R A S E                       F L A S H _ T Y P E E R A S E _ P A G E S 
 # d e f i n e   T Y P E E R A S E _ M A S S E R A S E                       F L A S H _ T Y P E E R A S E _ M A S S E R A S E 
 # d e f i n e   W R P S T A T E _ D I S A B L E                             O B _ W R P S T A T E _ D I S A B L E 
 # d e f i n e   W R P S T A T E _ E N A B L E                               O B _ W R P S T A T E _ E N A B L E 
 # d e f i n e   H A L _ F L A S H _ T I M E O U T _ V A L U E               F L A S H _ T I M E O U T _ V A L U E 
 # d e f i n e   O B E X _ P C R O P                                         O P T I O N B Y T E _ P C R O P 
 # d e f i n e   O B E X _ B O O T C O N F I G                               O P T I O N B Y T E _ B O O T C O N F I G 
 # d e f i n e   P C R O P S T A T E _ D I S A B L E                         O B _ P C R O P _ S T A T E _ D I S A B L E 
 # d e f i n e   P C R O P S T A T E _ E N A B L E                           O B _ P C R O P _ S T A T E _ E N A B L E 
 # d e f i n e   T Y P E E R A S E D A T A _ B Y T E                         F L A S H _ T Y P E E R A S E D A T A _ B Y T E 
 # d e f i n e   T Y P E E R A S E D A T A _ H A L F W O R D                 F L A S H _ T Y P E E R A S E D A T A _ H A L F W O R D 
 # d e f i n e   T Y P E E R A S E D A T A _ W O R D                         F L A S H _ T Y P E E R A S E D A T A _ W O R D 
 # d e f i n e   T Y P E P R O G R A M D A T A _ B Y T E                     F L A S H _ T Y P E P R O G R A M D A T A _ B Y T E 
 # d e f i n e   T Y P E P R O G R A M D A T A _ H A L F W O R D             F L A S H _ T Y P E P R O G R A M D A T A _ H A L F W O R D 
 # d e f i n e   T Y P E P R O G R A M D A T A _ W O R D                     F L A S H _ T Y P E P R O G R A M D A T A _ W O R D 
 # d e f i n e   T Y P E P R O G R A M D A T A _ F A S T B Y T E             F L A S H _ T Y P E P R O G R A M D A T A _ F A S T B Y T E 
 # d e f i n e   T Y P E P R O G R A M D A T A _ F A S T H A L F W O R D     F L A S H _ T Y P E P R O G R A M D A T A _ F A S T H A L F W O R D 
 # d e f i n e   T Y P E P R O G R A M D A T A _ F A S T W O R D             F L A S H _ T Y P E P R O G R A M D A T A _ F A S T W O R D 
 # d e f i n e   P A G E S I Z E                                             F L A S H _ P A G E _ S I Z E 
 # d e f i n e   T Y P E P R O G R A M _ F A S T B Y T E                     F L A S H _ T Y P E P R O G R A M _ B Y T E 
 # d e f i n e   T Y P E P R O G R A M _ F A S T H A L F W O R D             F L A S H _ T Y P E P R O G R A M _ H A L F W O R D 
 # d e f i n e   T Y P E P R O G R A M _ F A S T W O R D                     F L A S H _ T Y P E P R O G R A M _ W O R D 
 # d e f i n e   V O L T A G E _ R A N G E _ 1                               F L A S H _ V O L T A G E _ R A N G E _ 1 
 # d e f i n e   V O L T A G E _ R A N G E _ 2                               F L A S H _ V O L T A G E _ R A N G E _ 2 
 # d e f i n e   V O L T A G E _ R A N G E _ 3                               F L A S H _ V O L T A G E _ R A N G E _ 3 
 # d e f i n e   V O L T A G E _ R A N G E _ 4                               F L A S H _ V O L T A G E _ R A N G E _ 4 
 # d e f i n e   T Y P E P R O G R A M _ F A S T                             F L A S H _ T Y P E P R O G R A M _ F A S T 
 # d e f i n e   T Y P E P R O G R A M _ F A S T _ A N D _ L A S T           F L A S H _ T Y P E P R O G R A M _ F A S T _ A N D _ L A S T 
 # d e f i n e   W R P A R E A _ B A N K 1 _ A R E A A                       O B _ W R P A R E A _ B A N K 1 _ A R E A A 
 # d e f i n e   W R P A R E A _ B A N K 1 _ A R E A B                       O B _ W R P A R E A _ B A N K 1 _ A R E A B 
 # d e f i n e   W R P A R E A _ B A N K 2 _ A R E A A                       O B _ W R P A R E A _ B A N K 2 _ A R E A A 
 # d e f i n e   W R P A R E A _ B A N K 2 _ A R E A B                       O B _ W R P A R E A _ B A N K 2 _ A R E A B 
 # d e f i n e   I W D G _ S T D B Y _ F R E E Z E                           O B _ I W D G _ S T D B Y _ F R E E Z E 
 # d e f i n e   I W D G _ S T D B Y _ A C T I V E                           O B _ I W D G _ S T D B Y _ R U N 
 # d e f i n e   I W D G _ S T O P _ F R E E Z E                             O B _ I W D G _ S T O P _ F R E E Z E 
 # d e f i n e   I W D G _ S T O P _ A C T I V E                             O B _ I W D G _ S T O P _ R U N 
 # d e f i n e   F L A S H _ E R R O R _ N O N E                             H A L _ F L A S H _ E R R O R _ N O N E 
 # d e f i n e   F L A S H _ E R R O R _ R D                                 H A L _ F L A S H _ E R R O R _ R D 
 # d e f i n e   F L A S H _ E R R O R _ P G                                 H A L _ F L A S H _ E R R O R _ P R O G 
 # d e f i n e   F L A S H _ E R R O R _ P G P                               H A L _ F L A S H _ E R R O R _ P G S 
 # d e f i n e   F L A S H _ E R R O R _ W R P                               H A L _ F L A S H _ E R R O R _ W R P 
 # d e f i n e   F L A S H _ E R R O R _ O P T V                             H A L _ F L A S H _ E R R O R _ O P T V 
 # d e f i n e   F L A S H _ E R R O R _ O P T V U S R                       H A L _ F L A S H _ E R R O R _ O P T V U S R 
 # d e f i n e   F L A S H _ E R R O R _ P R O G                             H A L _ F L A S H _ E R R O R _ P R O G 
 # d e f i n e   F L A S H _ E R R O R _ O P                                 H A L _ F L A S H _ E R R O R _ O P E R A T I O N 
 # d e f i n e   F L A S H _ E R R O R _ P G A                               H A L _ F L A S H _ E R R O R _ P G A 
 # d e f i n e   F L A S H _ E R R O R _ S I Z E                             H A L _ F L A S H _ E R R O R _ S I Z E 
 # d e f i n e   F L A S H _ E R R O R _ S I Z                               H A L _ F L A S H _ E R R O R _ S I Z E 
 # d e f i n e   F L A S H _ E R R O R _ P G S                               H A L _ F L A S H _ E R R O R _ P G S 
 # d e f i n e   F L A S H _ E R R O R _ M I S                               H A L _ F L A S H _ E R R O R _ M I S 
 # d e f i n e   F L A S H _ E R R O R _ F A S T                             H A L _ F L A S H _ E R R O R _ F A S T 
 # d e f i n e   F L A S H _ E R R O R _ F W W E R R                         H A L _ F L A S H _ E R R O R _ F W W E R R 
 # d e f i n e   F L A S H _ E R R O R _ N O T Z E R O                       H A L _ F L A S H _ E R R O R _ N O T Z E R O 
 # d e f i n e   F L A S H _ E R R O R _ O P E R A T I O N                   H A L _ F L A S H _ E R R O R _ O P E R A T I O N 
 # d e f i n e   F L A S H _ E R R O R _ E R S                               H A L _ F L A S H _ E R R O R _ E R S 
 # d e f i n e   O B _ W D G _ S W                                           O B _ I W D G _ S W 
 # d e f i n e   O B _ W D G _ H W                                           O B _ I W D G _ H W 
 # d e f i n e   O B _ S D A D C 1 2 _ V D D _ M O N I T O R _ S E T         O B _ S D A C D _ V D D _ M O N I T O R _ S E T 
 # d e f i n e   O B _ S D A D C 1 2 _ V D D _ M O N I T O R _ R E S E T     O B _ S D A C D _ V D D _ M O N I T O R _ R E S E T 
 # d e f i n e   O B _ R A M _ P A R I T Y _ C H E C K _ S E T               O B _ S R A M _ P A R I T Y _ S E T 
 # d e f i n e   O B _ R A M _ P A R I T Y _ C H E C K _ R E S E T           O B _ S R A M _ P A R I T Y _ R E S E T 
 # d e f i n e   I S _ O B _ S D A D C 1 2 _ V D D _ M O N I T O R           I S _ O B _ S D A C D _ V D D _ M O N I T O R 
 # d e f i n e   O B _ R D P _ L E V E L 0                                   O B _ R D P _ L E V E L _ 0 
 # d e f i n e   O B _ R D P _ L E V E L 1                                   O B _ R D P _ L E V E L _ 1 
 # d e f i n e   O B _ R D P _ L E V E L 2                                   O B _ R D P _ L E V E L _ 2 
 # i f   d e f i n e d ( S T M 3 2 G 0 ) 
 # d e f i n e   O B _ B O O T _ L O C K _ D I S A B L E                     O B _ B O O T _ E N T R Y _ F O R C E D _ N O N E 
 # d e f i n e   O B _ B O O T _ L O C K _ E N A B L E                       O B _ B O O T _ E N T R Y _ F O R C E D _ F L A S H 
 # e l s e 
 # d e f i n e   O B _ B O O T _ E N T R Y _ F O R C E D _ N O N E           O B _ B O O T _ L O C K _ D I S A B L E 
 # d e f i n e   O B _ B O O T _ E N T R Y _ F O R C E D _ F L A S H         O B _ B O O T _ L O C K _ E N A B L E 
 # e n d i f 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   F L A S H _ F L A G _ S N E C C E _ B A N K 1 R R   F L A S H _ F L A G _ S N E C C E R R _ B A N K 1 
 # d e f i n e   F L A S H _ F L A G _ D B E C C E _ B A N K 1 R R   F L A S H _ F L A G _ D B E C C E R R _ B A N K 1 
 # d e f i n e   F L A S H _ F L A G _ S T R B E R _ B A N K 1 R     F L A S H _ F L A G _ S T R B E R R _ B A N K 1 
 # d e f i n e   F L A S H _ F L A G _ S N E C C E _ B A N K 2 R R   F L A S H _ F L A G _ S N E C C E R R _ B A N K 2 
 # d e f i n e   F L A S H _ F L A G _ D B E C C E _ B A N K 2 R R   F L A S H _ F L A G _ D B E C C E R R _ B A N K 2 
 # d e f i n e   F L A S H _ F L A G _ S T R B E R _ B A N K 2 R     F L A S H _ F L A G _ S T R B E R R _ B A N K 2 
 # d e f i n e   F L A S H _ F L A G _ W D W                         F L A S H _ F L A G _ W B N E 
 # d e f i n e   O B _ W R P _ S E C T O R _ A l l                   O B _ W R P _ S E C T O R _ A L L 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ J P E G _ A l i a s e d _ M a c r o s   H A L   J P E G   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   _ _ H A L _ R C C _ J P E G _ C L K _ E N A B L E                               _ _ H A L _ R C C _ J P G D E C E N _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ J P E G _ C L K _ D I S A B L E                             _ _ H A L _ R C C _ J P G D E C E N _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ J P E G _ F O R C E _ R E S E T                             _ _ H A L _ R C C _ J P G D E C R S T _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ J P E G _ R E L E A S E _ R E S E T                         _ _ H A L _ R C C _ J P G D E C R S T _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ J P E G _ C L K _ S L E E P _ E N A B L E                   _ _ H A L _ R C C _ J P G D E C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ J P E G _ C L K _ S L E E P _ D I S A B L E                 _ _ H A L _ R C C _ J P G D E C _ C L K _ S L E E P _ D I S A B L E 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S Y S C F G _ A l i a s e d _ D e f i n e s   H A L   S Y S C F G   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C _ P A 9         I 2 C _ F A S T M O D E P L U S _ P A 9 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C _ P A 1 0       I 2 C _ F A S T M O D E P L U S _ P A 1 0 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C _ P B 6         I 2 C _ F A S T M O D E P L U S _ P B 6 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C _ P B 7         I 2 C _ F A S T M O D E P L U S _ P B 7 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C _ P B 8         I 2 C _ F A S T M O D E P L U S _ P B 8 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C _ P B 9         I 2 C _ F A S T M O D E P L U S _ P B 9 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C 1               I 2 C _ F A S T M O D E P L U S _ I 2 C 1 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C 2               I 2 C _ F A S T M O D E P L U S _ I 2 C 2 
 # d e f i n e   H A L _ S Y S C F G _ F A S T M O D E P L U S _ I 2 C 3               I 2 C _ F A S T M O D E P L U S _ I 2 C 3 
 # i f   d e f i n e d ( S T M 3 2 G 4 ) 
 
 # d e f i n e   H A L _ S Y S C F G _ E n a b l e I O A n a l o g S w i t c h B o o s t e r         H A L _ S Y S C F G _ E n a b l e I O S w i t c h B o o s t e r 
 # d e f i n e   H A L _ S Y S C F G _ D i s a b l e I O A n a l o g S w i t c h B o o s t e r       H A L _ S Y S C F G _ D i s a b l e I O S w i t c h B o o s t e r 
 # d e f i n e   H A L _ S Y S C F G _ E n a b l e I O A n a l o g S w i t c h V D D                 H A L _ S Y S C F G _ E n a b l e I O S w i t c h V D D 
 # d e f i n e   H A L _ S Y S C F G _ D i s a b l e I O A n a l o g S w i t c h V D D               H A L _ S Y S C F G _ D i s a b l e I O S w i t c h V D D 
 # e n d i f   / *   S T M 3 2 G 4   * / 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   L L _ F M C _ A l i a s e d _ D e f i n e s   L L   F M C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   c o m p a t i b i l i t y   p u r p o s e 
     *   @ { 
     * / 
 # i f   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 G 4 ) 
 # d e f i n e   F M C _ N A N D _ P C C _ W A I T _ F E A T U R E _ D I S A B L E               F M C _ N A N D _ W A I T _ F E A T U R E _ D I S A B L E 
 # d e f i n e   F M C _ N A N D _ P C C _ W A I T _ F E A T U R E _ E N A B L E                 F M C _ N A N D _ W A I T _ F E A T U R E _ E N A B L E 
 # d e f i n e   F M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 8                         F M C _ N A N D _ M E M _ B U S _ W I D T H _ 8 
 # d e f i n e   F M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 1 6                       F M C _ N A N D _ M E M _ B U S _ W I D T H _ 1 6 
 # e l i f   d e f i n e d ( S T M 3 2 F 1 )   | |   d e f i n e d ( S T M 3 2 F 2 )   | |   d e f i n e d ( S T M 3 2 F 3 )   | |   d e f i n e d ( S T M 3 2 F 4 ) 
 # d e f i n e   F M C _ N A N D _ W A I T _ F E A T U R E _ D I S A B L E                       F M C _ N A N D _ P C C _ W A I T _ F E A T U R E _ D I S A B L E 
 # d e f i n e   F M C _ N A N D _ W A I T _ F E A T U R E _ E N A B L E                         F M C _ N A N D _ P C C _ W A I T _ F E A T U R E _ E N A B L E 
 # d e f i n e   F M C _ N A N D _ M E M _ B U S _ W I D T H _ 8                                 F M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 8 
 # d e f i n e   F M C _ N A N D _ M E M _ B U S _ W I D T H _ 1 6                               F M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 1 6 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   L L _ F S M C _ A l i a s e d _ D e f i n e s   L L   F S M C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   F S M C _ N O R S R A M _ T Y P E D E F                                             F S M C _ N O R S R A M _ T y p e D e f 
 # d e f i n e   F S M C _ N O R S R A M _ E X T E N D E D _ T Y P E D E F                           F S M C _ N O R S R A M _ E X T E N D E D _ T y p e D e f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ G P I O _ A l i a s e d _ M a c r o s   H A L   G P I O   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   G E T _ G P I O _ S O U R C E                                                       G P I O _ G E T _ I N D E X 
 # d e f i n e   G E T _ G P I O _ I N D E X                                                         G P I O _ G E T _ I N D E X 
 
 # i f   d e f i n e d ( S T M 3 2 F 4 ) 
 # d e f i n e   G P I O _ A F 1 2 _ S D M M C                                                       G P I O _ A F 1 2 _ S D I O 
 # d e f i n e   G P I O _ A F 1 2 _ S D M M C 1                                                     G P I O _ A F 1 2 _ S D I O 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 7 ) 
 # d e f i n e   G P I O _ A F 1 2 _ S D I O                                                         G P I O _ A F 1 2 _ S D M M C 1 
 # d e f i n e   G P I O _ A F 1 2 _ S D M M C                                                       G P I O _ A F 1 2 _ S D M M C 1 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 ) 
 # d e f i n e   G P I O _ A F 1 2 _ S D I O                                                         G P I O _ A F 1 2 _ S D M M C 1 
 # d e f i n e   G P I O _ A F 1 2 _ S D M M C                                                       G P I O _ A F 1 2 _ S D M M C 1 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   G P I O _ A F 7 _ S D I O 1                                                         G P I O _ A F 7 _ S D M M C 1 
 # d e f i n e   G P I O _ A F 8 _ S D I O 1                                                         G P I O _ A F 8 _ S D M M C 1 
 # d e f i n e   G P I O _ A F 1 2 _ S D I O 1                                                       G P I O _ A F 1 2 _ S D M M C 1 
 # d e f i n e   G P I O _ A F 9 _ S D I O 2                                                         G P I O _ A F 9 _ S D M M C 2 
 # d e f i n e   G P I O _ A F 1 0 _ S D I O 2                                                       G P I O _ A F 1 0 _ S D M M C 2 
 # d e f i n e   G P I O _ A F 1 1 _ S D I O 2                                                       G P I O _ A F 1 1 _ S D M M C 2 
 
 # i f   d e f i n e d   ( S T M 3 2 H 7 4 3 x x )   | |   d e f i n e d   ( S T M 3 2 H 7 5 3 x x )     | |   d e f i n e d   ( S T M 3 2 H 7 5 0 x x )   | |   d e f i n e d   ( S T M 3 2 H 7 4 2 x x )   | |   \ 
         d e f i n e d   ( S T M 3 2 H 7 4 5 x x )   | |   d e f i n e d   ( S T M 3 2 H 7 5 5 x x )     | |   d e f i n e d   ( S T M 3 2 H 7 4 7 x x )   | |   d e f i n e d   ( S T M 3 2 H 7 5 7 x x ) 
 # d e f i n e   G P I O _ A F 1 0 _ O T G 2 _ H S     G P I O _ A F 1 0 _ O T G 2 _ F S 
 # d e f i n e   G P I O _ A F 1 0 _ O T G 1 _ F S     G P I O _ A F 1 0 _ O T G 1 _ H S 
 # d e f i n e   G P I O _ A F 1 2 _ O T G 2 _ F S     G P I O _ A F 1 2 _ O T G 1 _ F S 
 # e n d i f   / * S T M 3 2 H 7 4 3 x x   | |   S T M 3 2 H 7 5 3 x x   | |   S T M 3 2 H 7 5 0 x x   | |   S T M 3 2 H 7 4 2 x x   | |   S T M 3 2 H 7 4 5 x x   | |   S T M 3 2 H 7 5 5 x x   | |   S T M 3 2 H 7 4 7 x x   | |   S T M 3 2 H 7 5 7 x x   * / 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 # d e f i n e   G P I O _ A F 0 _ L P T I M                                                         G P I O _ A F 0 _ L P T I M 1 
 # d e f i n e   G P I O _ A F 1 _ L P T I M                                                         G P I O _ A F 1 _ L P T I M 1 
 # d e f i n e   G P I O _ A F 2 _ L P T I M                                                         G P I O _ A F 2 _ L P T I M 1 
 
 # i f   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 2 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 G 4 )   | |   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e     G P I O _ S P E E D _ L O W                                                       G P I O _ S P E E D _ F R E Q _ L O W 
 # d e f i n e     G P I O _ S P E E D _ M E D I U M                                                 G P I O _ S P E E D _ F R E Q _ M E D I U M 
 # d e f i n e     G P I O _ S P E E D _ F A S T                                                     G P I O _ S P E E D _ F R E Q _ H I G H 
 # d e f i n e     G P I O _ S P E E D _ H I G H                                                     G P I O _ S P E E D _ F R E Q _ V E R Y _ H I G H 
 # e n d i f   / *   S T M 3 2 L 0   | |   S T M 3 2 L 4   | |   S T M 3 2 F 4   | |   S T M 3 2 F 2   | |   S T M 3 2 F 7   | |   S T M 3 2 G 4   | |   S T M 3 2 H 7 * / 
 
 # i f   d e f i n e d ( S T M 3 2 L 1 ) 
   # d e f i n e     G P I O _ S P E E D _ V E R Y _ L O W         G P I O _ S P E E D _ F R E Q _ L O W 
   # d e f i n e     G P I O _ S P E E D _ L O W                   G P I O _ S P E E D _ F R E Q _ M E D I U M 
   # d e f i n e     G P I O _ S P E E D _ M E D I U M             G P I O _ S P E E D _ F R E Q _ H I G H 
   # d e f i n e     G P I O _ S P E E D _ H I G H                 G P I O _ S P E E D _ F R E Q _ V E R Y _ H I G H 
 # e n d i f   / *   S T M 3 2 L 1   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 0 )   | |   d e f i n e d ( S T M 3 2 F 3 )   | |   d e f i n e d ( S T M 3 2 F 1 ) 
   # d e f i n e     G P I O _ S P E E D _ L O W         G P I O _ S P E E D _ F R E Q _ L O W 
   # d e f i n e     G P I O _ S P E E D _ M E D I U M   G P I O _ S P E E D _ F R E Q _ M E D I U M 
   # d e f i n e     G P I O _ S P E E D _ H I G H       G P I O _ S P E E D _ F R E Q _ H I G H 
 # e n d i f   / *   S T M 3 2 F 0   | |   S T M 3 2 F 3   | |   S T M 3 2 F 1   * / 
 
 # d e f i n e   G P I O _ A F 6 _ D F S D M                                                         G P I O _ A F 6 _ D F S D M 1 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ H R T I M _ A l i a s e d _ M a c r o s   H A L   H R T I M   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D I S A B L E D                       H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D I S A B L E D 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 1 _ E E V 6 8     H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 1 _ E E V 6 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 2 _ E E V 6 8     H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 2 _ E E V 6 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D E L A Y E D B O T H _ E E V 6 8     H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D E L A Y E D B O T H _ E E V 6 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ B A L A N C E D _ E E V 6 8           H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ B A L A N C E D _ E E V 6 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 1 _ D E E V 7 9   H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 1 _ D E E V 7 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 2 _ D E E V 7 9   H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D E L A Y E D O U T 2 _ D E E V 7 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ D E L A Y E D B O T H _ E E V 7 9     H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ D E L A Y E D B O T H _ E E V 7 
 # d e f i n e   H R T I M _ T I M D E L A Y E D P R O T E C T I O N _ B A L A N C E D _ E E V 7 9           H R T I M _ T I M E R _ A _ B _ C _ D E L A Y E D P R O T E C T I O N _ B A L A N C E D _ E E V 7 
 
 # d e f i n e   _ _ H A L _ H R T I M _ S e t C o u n t e r                 _ _ H A L _ H R T I M _ S E T C O U N T E R 
 # d e f i n e   _ _ H A L _ H R T I M _ G e t C o u n t e r                 _ _ H A L _ H R T I M _ G E T C O U N T E R 
 # d e f i n e   _ _ H A L _ H R T I M _ S e t P e r i o d                   _ _ H A L _ H R T I M _ S E T P E R I O D 
 # d e f i n e   _ _ H A L _ H R T I M _ G e t P e r i o d                   _ _ H A L _ H R T I M _ G E T P E R I O D 
 # d e f i n e   _ _ H A L _ H R T I M _ S e t C l o c k P r e s c a l e r   _ _ H A L _ H R T I M _ S E T C L O C K P R E S C A L E R 
 # d e f i n e   _ _ H A L _ H R T I M _ G e t C l o c k P r e s c a l e r   _ _ H A L _ H R T I M _ G E T C L O C K P R E S C A L E R 
 # d e f i n e   _ _ H A L _ H R T I M _ S e t C o m p a r e                 _ _ H A L _ H R T I M _ S E T C O M P A R E 
 # d e f i n e   _ _ H A L _ H R T I M _ G e t C o m p a r e                 _ _ H A L _ H R T I M _ G E T C O M P A R E 
 
 # i f   d e f i n e d ( S T M 3 2 G 4 ) 
 # d e f i n e   H A L _ H R T I M _ E x t e r n a l E v e n t C o u n t e r C o n f i g         H A L _ H R T I M _ E x t E v e n t C o u n t e r C o n f i g 
 # d e f i n e   H A L _ H R T I M _ E x t e r n a l E v e n t C o u n t e r E n a b l e         H A L _ H R T I M _ E x t E v e n t C o u n t e r E n a b l e 
 # d e f i n e   H A L _ H R T I M _ E x t e r n a l E v e n t C o u n t e r D i s a b l e       H A L _ H R T I M _ E x t E v e n t C o u n t e r D i s a b l e 
 # d e f i n e   H A L _ H R T I M _ E x t e r n a l E v e n t C o u n t e r R e s e t           H A L _ H R T I M _ E x t E v e n t C o u n t e r R e s e t 
 # d e f i n e   H R T I M _ T I M E E V E N T _ A                                               H R T I M _ E V E N T C O U N T E R _ A 
 # d e f i n e   H R T I M _ T I M E E V E N T _ B                                               H R T I M _ E V E N T C O U N T E R _ B 
 # d e f i n e   H R T I M _ T I M E E V E N T R E S E T M O D E _ U N C O N D I T I O N A L     H R T I M _ E V E N T C O U N T E R _ R S T M O D E _ U N C O N D I T I O N A L 
 # d e f i n e   H R T I M _ T I M E E V E N T R E S E T M O D E _ C O N D I T I O N A L         H R T I M _ E V E N T C O U N T E R _ R S T M O D E _ C O N D I T I O N A L 
 # e n d i f   / *   S T M 3 2 G 4   * / 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 1 _ T I M B C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 2 _ T I M B C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 3 _ T I M C C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 4 _ T I M C C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 5 _ T I M D C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 6 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 7 _ T I M E C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 8 _ T I M E C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M A E V 9 _ T I M F C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 1 _ T I M A C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 2 _ T I M A C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 3 _ T I M C C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 4 _ T I M C C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 5 _ T I M D C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 6 _ T I M D C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 7 _ T I M E C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 8 _ T I M E C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M B E V 9 _ T I M F C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 1 _ T I M A C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 2 _ T I M A C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 3 _ T I M B C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 4 _ T I M B C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 5 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 6 _ T I M D C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 7 _ T I M E C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 8 _ T I M E C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M C E V 9 _ T I M F C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 1 _ T I M A C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 2 _ T I M A C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 3 _ T I M B C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 4 _ T I M B C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 5 _ T I M C C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 6 _ T I M E C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 7 _ T I M E C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 8 _ T I M F C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M D E V 9 _ T I M F C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 1 _ T I M A C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 2 _ T I M B C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 3 _ T I M B C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 4 _ T I M C C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 5 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 6 _ T I M D C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 7 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 8 _ T I M F C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E E V 9 _ T I M F C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 1 _ T I M A C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 2 _ T I M B C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 3 _ T I M B C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 4 _ T I M C C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 5 _ T I M C C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 6 _ T I M D C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 7 _ T I M D C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 8 _ T I M E C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M F E V 9 _ T I M E C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 1 _ T I M B C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 2 _ T I M B C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 3 _ T I M C C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 4 _ T I M C C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 5 _ T I M D C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 6 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 7 _ T I M E C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 8 _ T I M E C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M A E V 9 _ T I M F C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 1 _ T I M A C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 2 _ T I M A C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 3 _ T I M C C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 4 _ T I M C C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 5 _ T I M D C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 6 _ T I M D C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 7 _ T I M E C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 8 _ T I M E C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M B E V 9 _ T I M F C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 1 _ T I M A C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 2 _ T I M A C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 3 _ T I M B C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 4 _ T I M B C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 5 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 6 _ T I M D C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 7 _ T I M E C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 8 _ T I M E C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M C E V 9 _ T I M F C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 1 _ T I M A C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 2 _ T I M A C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 3 _ T I M B C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 4 _ T I M B C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 5 _ T I M C C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 6 _ T I M E C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 7 _ T I M E C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 8 _ T I M F C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M D E V 9 _ T I M F C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 1 _ T I M A C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 2 _ T I M B C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 3 _ T I M B C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 4 _ T I M C C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 5 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 6 _ T I M D C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 7 _ T I M D C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 8 _ T I M F C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E E V 9 _ T I M F C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 1 _ T I M A C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 1 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 2 _ T I M B C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 2 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 3 _ T I M B C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 3 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 4 _ T I M C C M P 1   H R T I M _ O U T P U T S E T _ T I M E V _ 4 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 5 _ T I M C C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 5 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 6 _ T I M D C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 6 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 7 _ T I M D C M P 4   H R T I M _ O U T P U T S E T _ T I M E V _ 7 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 8 _ T I M E C M P 2   H R T I M _ O U T P U T S E T _ T I M E V _ 8 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M F E V 9 _ T I M E C M P 3   H R T I M _ O U T P U T S E T _ T I M E V _ 9 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 3 ) 
 / * *   @ b r i e f   C o n s t a n t s   d e f i n i n g   a v a i l a b l e   s o u r c e s   a s s o c i a t e d   t o   e x t e r n a l   e v e n t s . 
     * / 
 # d e f i n e   H R T I M _ E V E N T S R C _ 1                             ( 0 x 0 0 0 0 0 0 0 0 U ) 
 # d e f i n e   H R T I M _ E V E N T S R C _ 2                             ( H R T I M _ E E C R 1 _ E E 1 S R C _ 0 ) 
 # d e f i n e   H R T I M _ E V E N T S R C _ 3                             ( H R T I M _ E E C R 1 _ E E 1 S R C _ 1 ) 
 # d e f i n e   H R T I M _ E V E N T S R C _ 4                             ( H R T I M _ E E C R 1 _ E E 1 S R C _ 1   |   H R T I M _ E E C R 1 _ E E 1 S R C _ 0 ) 
 
 / * *   @ b r i e f   C o n s t a n t s   d e f i n i n g   t h e   e v e n t s   t h a t   c a n   b e   s e l e c t e d   t o   c o n f i g u r e   t h e 
     *                 s e t / r e s e t   c r o s s b a r   o f   a   t i m e r   o u t p u t 
     * / 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 1               ( H R T I M _ S E T 1 R _ T I M E V N T 1 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 2               ( H R T I M _ S E T 1 R _ T I M E V N T 2 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 3               ( H R T I M _ S E T 1 R _ T I M E V N T 3 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 4               ( H R T I M _ S E T 1 R _ T I M E V N T 4 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 5               ( H R T I M _ S E T 1 R _ T I M E V N T 5 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 6               ( H R T I M _ S E T 1 R _ T I M E V N T 6 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 7               ( H R T I M _ S E T 1 R _ T I M E V N T 7 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 8               ( H R T I M _ S E T 1 R _ T I M E V N T 8 ) 
 # d e f i n e   H R T I M _ O U T P U T S E T _ T I M E V _ 9               ( H R T I M _ S E T 1 R _ T I M E V N T 9 ) 
 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 1           ( H R T I M _ R S T 1 R _ T I M E V N T 1 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 2           ( H R T I M _ R S T 1 R _ T I M E V N T 2 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 3           ( H R T I M _ R S T 1 R _ T I M E V N T 3 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 4           ( H R T I M _ R S T 1 R _ T I M E V N T 4 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 5           ( H R T I M _ R S T 1 R _ T I M E V N T 5 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 6           ( H R T I M _ R S T 1 R _ T I M E V N T 6 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 7           ( H R T I M _ R S T 1 R _ T I M E V N T 7 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 8           ( H R T I M _ R S T 1 R _ T I M E V N T 8 ) 
 # d e f i n e   H R T I M _ O U T P U T R E S E T _ T I M E V _ 9           ( H R T I M _ R S T 1 R _ T I M E V N T 9 ) 
 
 / * *   @ b r i e f   C o n s t a n t s   d e f i n i n g   t h e   e v e n t   f i l t e r i n g   a p p l i e d   t o   e x t e r n a l   e v e n t s 
     *                 b y   a   t i m e r 
     * / 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ N O N E                           ( 0 x 0 0 0 0 0 0 0 0 U ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G C M P 1           ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G C M P 2           ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 1 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G C M P 3           ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 1   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G C M P 4           ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 2 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 1         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 2   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 2         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 2   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 1 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 3         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 2   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 1   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 4         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 5         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 6         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 1 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 7         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 1   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ B L A N K I N G F L T R 8         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 2 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ W I N D O W I N G C M P 2         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 2   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ W I N D O W I N G C M P 3         ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 2   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 1 ) 
 # d e f i n e   H R T I M _ T I M E V E N T F I L T E R _ W I N D O W I N G T I M           ( H R T I M _ E E F R 1 _ E E 1 F L T R _ 3   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 2   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 1   |   H R T I M _ E E F R 1 _ E E 1 F L T R _ 0 ) 
 
 / * *   @ b r i e f   C o n s t a n t s   d e f i n i n g   t h e   D L L   c a l i b r a t i o n   p e r i o d s   ( i n   m i c r o   s e c o n d s ) 
     * / 
 # d e f i n e   H R T I M _ C A L I B R A T I O N R A T E _ 7 3 0 0                           0 x 0 0 0 0 0 0 0 0 U 
 # d e f i n e   H R T I M _ C A L I B R A T I O N R A T E _ 9 1 0                             ( H R T I M _ D L L C R _ C A L R T E _ 0 ) 
 # d e f i n e   H R T I M _ C A L I B R A T I O N R A T E _ 1 1 4                             ( H R T I M _ D L L C R _ C A L R T E _ 1 ) 
 # d e f i n e   H R T I M _ C A L I B R A T I O N R A T E _ 1 4                               ( H R T I M _ D L L C R _ C A L R T E _ 1   |   H R T I M _ D L L C R _ C A L R T E _ 0 ) 
 
 # e n d i f   / *   S T M 3 2 F 3   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I 2 C _ A l i a s e d _ D e f i n e s   H A L   I 2 C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   I 2 C _ D U A L A D D R E S S _ D I S A B L E D                                 I 2 C _ D U A L A D D R E S S _ D I S A B L E 
 # d e f i n e   I 2 C _ D U A L A D D R E S S _ E N A B L E D                                   I 2 C _ D U A L A D D R E S S _ E N A B L E 
 # d e f i n e   I 2 C _ G E N E R A L C A L L _ D I S A B L E D                                 I 2 C _ G E N E R A L C A L L _ D I S A B L E 
 # d e f i n e   I 2 C _ G E N E R A L C A L L _ E N A B L E D                                   I 2 C _ G E N E R A L C A L L _ E N A B L E 
 # d e f i n e   I 2 C _ N O S T R E T C H _ D I S A B L E D                                     I 2 C _ N O S T R E T C H _ D I S A B L E 
 # d e f i n e   I 2 C _ N O S T R E T C H _ E N A B L E D                                       I 2 C _ N O S T R E T C H _ E N A B L E 
 # d e f i n e   I 2 C _ A N A L O G F I L T E R _ E N A B L E D                                 I 2 C _ A N A L O G F I L T E R _ E N A B L E 
 # d e f i n e   I 2 C _ A N A L O G F I L T E R _ D I S A B L E D                               I 2 C _ A N A L O G F I L T E R _ D I S A B L E 
 # i f   d e f i n e d ( S T M 3 2 F 0 )   | |   d e f i n e d ( S T M 3 2 F 1 )   | |   d e f i n e d ( S T M 3 2 F 3 )   | |   d e f i n e d ( S T M 3 2 G 0 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 L 1 )   | |   d e f i n e d ( S T M 3 2 F 7 ) 
 # d e f i n e   H A L _ I 2 C _ S T A T E _ M E M _ B U S Y _ T X                               H A L _ I 2 C _ S T A T E _ B U S Y _ T X 
 # d e f i n e   H A L _ I 2 C _ S T A T E _ M E M _ B U S Y _ R X                               H A L _ I 2 C _ S T A T E _ B U S Y _ R X 
 # d e f i n e   H A L _ I 2 C _ S T A T E _ M A S T E R _ B U S Y _ T X                         H A L _ I 2 C _ S T A T E _ B U S Y _ T X 
 # d e f i n e   H A L _ I 2 C _ S T A T E _ M A S T E R _ B U S Y _ R X                         H A L _ I 2 C _ S T A T E _ B U S Y _ R X 
 # d e f i n e   H A L _ I 2 C _ S T A T E _ S L A V E _ B U S Y _ T X                           H A L _ I 2 C _ S T A T E _ B U S Y _ T X 
 # d e f i n e   H A L _ I 2 C _ S T A T E _ S L A V E _ B U S Y _ R X                           H A L _ I 2 C _ S T A T E _ B U S Y _ R X 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I R D A _ A l i a s e d _ D e f i n e s   H A L   I R D A   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   I R D A _ O N E _ B I T _ S A M P L E _ D I S A B L E D                         I R D A _ O N E _ B I T _ S A M P L E _ D I S A B L E 
 # d e f i n e   I R D A _ O N E _ B I T _ S A M P L E _ E N A B L E D                           I R D A _ O N E _ B I T _ S A M P L E _ E N A B L E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I W D G _ A l i a s e d _ D e f i n e s   H A L   I W D G   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   K R _ K E Y _ R E L O A D                                       I W D G _ K E Y _ R E L O A D 
 # d e f i n e   K R _ K E Y _ E N A B L E                                       I W D G _ K E Y _ E N A B L E 
 # d e f i n e   K R _ K E Y _ E W A                                             I W D G _ K E Y _ W R I T E _ A C C E S S _ E N A B L E 
 # d e f i n e   K R _ K E Y _ D W A                                             I W D G _ K E Y _ W R I T E _ A C C E S S _ D I S A B L E 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ L P T I M _ A l i a s e d _ D e f i n e s   H A L   L P T I M   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   L P T I M _ C L O C K S A M P L E T I M E _ D I R E C T T R A N S I S T I O N   L P T I M _ C L O C K S A M P L E T I M E _ D I R E C T T R A N S I T I O N 
 # d e f i n e   L P T I M _ C L O C K S A M P L E T I M E _ 2 T R A N S I S T I O N S           L P T I M _ C L O C K S A M P L E T I M E _ 2 T R A N S I T I O N S 
 # d e f i n e   L P T I M _ C L O C K S A M P L E T I M E _ 4 T R A N S I S T I O N S           L P T I M _ C L O C K S A M P L E T I M E _ 4 T R A N S I T I O N S 
 # d e f i n e   L P T I M _ C L O C K S A M P L E T I M E _ 8 T R A N S I S T I O N S           L P T I M _ C L O C K S A M P L E T I M E _ 8 T R A N S I T I O N S 
 
 # d e f i n e   L P T I M _ C L O C K P O L A R I T Y _ R I S I N G E D G E                     L P T I M _ C L O C K P O L A R I T Y _ R I S I N G 
 # d e f i n e   L P T I M _ C L O C K P O L A R I T Y _ F A L L I N G E D G E                   L P T I M _ C L O C K P O L A R I T Y _ F A L L I N G 
 # d e f i n e   L P T I M _ C L O C K P O L A R I T Y _ B O T H E D G E S                       L P T I M _ C L O C K P O L A R I T Y _ R I S I N G _ F A L L I N G 
 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ D I R E C T T R A N S I S T I O N     L P T I M _ T R I G S A M P L E T I M E _ D I R E C T T R A N S I T I O N 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ 2 T R A N S I S T I O N S             L P T I M _ T R I G S A M P L E T I M E _ 2 T R A N S I T I O N S 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ 4 T R A N S I S T I O N S             L P T I M _ T R I G S A M P L E T I M E _ 4 T R A N S I T I O N S 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ 8 T R A N S I S T I O N S             L P T I M _ T R I G S A M P L E T I M E _ 8 T R A N S I T I O N S 
 
 / *   T h e   f o l l o w i n g   3   d e f i n i t i o n   h a v e   a l s o   b e e n   p r e s e n t   i n   a   t e m p o r a r y   v e r s i o n   o f   l p t i m . h   * / 
 / *   T h e y   n e e d   t o   b e   r e n a m e d   a l s o   t o   t h e   r i g h t   n a m e ,   j u s t   i n   c a s e   * / 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ 2 T R A N S I T I O N                 L P T I M _ T R I G S A M P L E T I M E _ 2 T R A N S I T I O N S 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ 4 T R A N S I T I O N                 L P T I M _ T R I G S A M P L E T I M E _ 4 T R A N S I T I O N S 
 # d e f i n e   L P T I M _ T R I G S A M P L E T I M E _ 8 T R A N S I T I O N                 L P T I M _ T R I G S A M P L E T I M E _ 8 T R A N S I T I O N S 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ N A N D _ A l i a s e d _ D e f i n e s   H A L   N A N D   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ N A N D _ R e a d _ P a g e                             H A L _ N A N D _ R e a d _ P a g e _ 8 b 
 # d e f i n e   H A L _ N A N D _ W r i t e _ P a g e                           H A L _ N A N D _ W r i t e _ P a g e _ 8 b 
 # d e f i n e   H A L _ N A N D _ R e a d _ S p a r e A r e a                   H A L _ N A N D _ R e a d _ S p a r e A r e a _ 8 b 
 # d e f i n e   H A L _ N A N D _ W r i t e _ S p a r e A r e a                 H A L _ N A N D _ W r i t e _ S p a r e A r e a _ 8 b 
 
 # d e f i n e   N A N D _ A d d r e s s T y p e d e f                           N A N D _ A d d r e s s T y p e D e f 
 
 # d e f i n e   _ _ A R R A Y _ A D D R E S S                                   A R R A Y _ A D D R E S S 
 # d e f i n e   _ _ A D D R _ 1 s t _ C Y C L E                                 A D D R _ 1 S T _ C Y C L E 
 # d e f i n e   _ _ A D D R _ 2 n d _ C Y C L E                                 A D D R _ 2 N D _ C Y C L E 
 # d e f i n e   _ _ A D D R _ 3 r d _ C Y C L E                                 A D D R _ 3 R D _ C Y C L E 
 # d e f i n e   _ _ A D D R _ 4 t h _ C Y C L E                                 A D D R _ 4 T H _ C Y C L E 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ N O R _ A l i a s e d _ D e f i n e s   H A L   N O R   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   N O R _ S t a t u s T y p e d e f                             H A L _ N O R _ S t a t u s T y p e D e f 
 # d e f i n e   N O R _ S U C C E S S                                         H A L _ N O R _ S T A T U S _ S U C C E S S 
 # d e f i n e   N O R _ O N G O I N G                                         H A L _ N O R _ S T A T U S _ O N G O I N G 
 # d e f i n e   N O R _ E R R O R                                             H A L _ N O R _ S T A T U S _ E R R O R 
 # d e f i n e   N O R _ T I M E O U T                                         H A L _ N O R _ S T A T U S _ T I M E O U T 
 
 # d e f i n e   _ _ N O R _ W R I T E                                         N O R _ W R I T E 
 # d e f i n e   _ _ N O R _ A D D R _ S H I F T                               N O R _ A D D R _ S H I F T 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ O P A M P _ A l i a s e d _ D e f i n e s   H A L   O P A M P   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   O P A M P _ N O N I N V E R T I N G I N P U T _ V P 0                       O P A M P _ N O N I N V E R T I N G I N P U T _ I O 0 
 # d e f i n e   O P A M P _ N O N I N V E R T I N G I N P U T _ V P 1                       O P A M P _ N O N I N V E R T I N G I N P U T _ I O 1 
 # d e f i n e   O P A M P _ N O N I N V E R T I N G I N P U T _ V P 2                       O P A M P _ N O N I N V E R T I N G I N P U T _ I O 2 
 # d e f i n e   O P A M P _ N O N I N V E R T I N G I N P U T _ V P 3                       O P A M P _ N O N I N V E R T I N G I N P U T _ I O 3 
 
 # d e f i n e   O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ V P 0               O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ I O 0 
 # d e f i n e   O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ V P 1               O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ I O 1 
 # d e f i n e   O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ V P 2               O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ I O 2 
 # d e f i n e   O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ V P 3               O P A M P _ S E C _ N O N I N V E R T I N G I N P U T _ I O 3 
 
 # d e f i n e   O P A M P _ I N V E R T I N G I N P U T _ V M 0                             O P A M P _ I N V E R T I N G I N P U T _ I O 0 
 # d e f i n e   O P A M P _ I N V E R T I N G I N P U T _ V M 1                             O P A M P _ I N V E R T I N G I N P U T _ I O 1 
 
 # d e f i n e   I O P A M P _ I N V E R T I N G I N P U T _ V M 0                           O P A M P _ I N V E R T I N G I N P U T _ I O 0 
 # d e f i n e   I O P A M P _ I N V E R T I N G I N P U T _ V M 1                           O P A M P _ I N V E R T I N G I N P U T _ I O 1 
 
 # d e f i n e   O P A M P _ S E C _ I N V E R T I N G I N P U T _ V M 0                     O P A M P _ S E C _ I N V E R T I N G I N P U T _ I O 0 
 # d e f i n e   O P A M P _ S E C _ I N V E R T I N G I N P U T _ V M 1                     O P A M P _ S E C _ I N V E R T I N G I N P U T _ I O 1 
 
 # d e f i n e   O P A M P _ I N V E R T I N G I N P U T _ V I N M                           O P A M P _ S E C _ I N V E R T I N G I N P U T _ I O 1 
 
 # d e f i n e   O P A M P _ P G A C O N N E C T _ N O                                       O P A M P _ P G A _ C O N N E C T _ I N V E R T I N G I N P U T _ N O 
 # d e f i n e   O P A M P _ P G A C O N N E C T _ V M 0                                     O P A M P _ P G A _ C O N N E C T _ I N V E R T I N G I N P U T _ I O 0 
 # d e f i n e   O P A M P _ P G A C O N N E C T _ V M 1                                     O P A M P _ P G A _ C O N N E C T _ I N V E R T I N G I N P U T _ I O 1 
 
 # i f   d e f i n e d ( S T M 3 2 L 1 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 L 5 )   | |   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 G 4 ) 
 # d e f i n e   H A L _ O P A M P _ M S P _ I N I T _ C B _ I D               H A L _ O P A M P _ M S P I N I T _ C B _ I D 
 # d e f i n e   H A L _ O P A M P _ M S P _ D E I N I T _ C B _ I D           H A L _ O P A M P _ M S P D E I N I T _ C B _ I D 
 # e n d i f 
 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I 2 S _ A l i a s e d _ D e f i n e s   H A L   I 2 S   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   I 2 S _ S T A N D A R D _ P H I L L I P S             I 2 S _ S T A N D A R D _ P H I L I P S 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
     # d e f i n e   I 2 S _ I T _ T X E                               I 2 S _ I T _ T X P 
     # d e f i n e   I 2 S _ I T _ R X N E                             I 2 S _ I T _ R X P 
 
     # d e f i n e   I 2 S _ F L A G _ T X E                           I 2 S _ F L A G _ T X P 
     # d e f i n e   I 2 S _ F L A G _ R X N E                         I 2 S _ F L A G _ R X P 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 7 ) 
     # d e f i n e   I 2 S _ C L O C K _ S Y S C L K                       I 2 S _ C L O C K _ P L L 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ P C C A R D _ A l i a s e d _ D e f i n e s   H A L   P C C A R D   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 / *   C o m p a c t   F l a s h - A T A   r e g i s t e r s   d e s c r i p t i o n   * / 
 # d e f i n e   C F _ D A T A                                               A T A _ D A T A 
 # d e f i n e   C F _ S E C T O R _ C O U N T                               A T A _ S E C T O R _ C O U N T 
 # d e f i n e   C F _ S E C T O R _ N U M B E R                             A T A _ S E C T O R _ N U M B E R 
 # d e f i n e   C F _ C Y L I N D E R _ L O W                               A T A _ C Y L I N D E R _ L O W 
 # d e f i n e   C F _ C Y L I N D E R _ H I G H                             A T A _ C Y L I N D E R _ H I G H 
 # d e f i n e   C F _ C A R D _ H E A D                                     A T A _ C A R D _ H E A D 
 # d e f i n e   C F _ S T A T U S _ C M D                                   A T A _ S T A T U S _ C M D 
 # d e f i n e   C F _ S T A T U S _ C M D _ A L T E R N A T E               A T A _ S T A T U S _ C M D _ A L T E R N A T E 
 # d e f i n e   C F _ C O M M O N _ D A T A _ A R E A                       A T A _ C O M M O N _ D A T A _ A R E A 
 
 / *   C o m p a c t   F l a s h - A T A   c o m m a n d s   * / 
 # d e f i n e   C F _ R E A D _ S E C T O R _ C M D                         A T A _ R E A D _ S E C T O R _ C M D 
 # d e f i n e   C F _ W R I T E _ S E C T O R _ C M D                       A T A _ W R I T E _ S E C T O R _ C M D 
 # d e f i n e   C F _ E R A S E _ S E C T O R _ C M D                       A T A _ E R A S E _ S E C T O R _ C M D 
 # d e f i n e   C F _ I D E N T I F Y _ C M D                               A T A _ I D E N T I F Y _ C M D 
 
 # d e f i n e   P C C A R D _ S t a t u s T y p e d e f                     H A L _ P C C A R D _ S t a t u s T y p e D e f 
 # d e f i n e   P C C A R D _ S U C C E S S                                 H A L _ P C C A R D _ S T A T U S _ S U C C E S S 
 # d e f i n e   P C C A R D _ O N G O I N G                                 H A L _ P C C A R D _ S T A T U S _ O N G O I N G 
 # d e f i n e   P C C A R D _ E R R O R                                     H A L _ P C C A R D _ S T A T U S _ E R R O R 
 # d e f i n e   P C C A R D _ T I M E O U T                                 H A L _ P C C A R D _ S T A T U S _ T I M E O U T 
 / * * 
     *   @ } 
     * / 
     
 / * *   @ d e f g r o u p   H A L _ R T C _ A l i a s e d _ D e f i n e s   H A L   R T C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   F O R M A T _ B I N                                     R T C _ F O R M A T _ B I N 
 # d e f i n e   F O R M A T _ B C D                                     R T C _ F O R M A T _ B C D 
 
 # d e f i n e   R T C _ A L A R M S U B S E C O N D M A S K _ N o n e           R T C _ A L A R M S U B S E C O N D M A S K _ N O N E 
 # d e f i n e   R T C _ T A M P E R E R A S E B A C K U P _ D I S A B L E D     R T C _ T A M P E R _ E R A S E _ B A C K U P _ D I S A B L E 
 # d e f i n e   R T C _ T A M P E R M A S K _ F L A G _ D I S A B L E D         R T C _ T A M P E R M A S K _ F L A G _ D I S A B L E 
 # d e f i n e   R T C _ T A M P E R M A S K _ F L A G _ E N A B L E D           R T C _ T A M P E R M A S K _ F L A G _ E N A B L E 
 
 # d e f i n e   R T C _ M A S K T A M P E R F L A G _ D I S A B L E D           R T C _ T A M P E R M A S K _ F L A G _ D I S A B L E 
 # d e f i n e   R T C _ M A S K T A M P E R F L A G _ E N A B L E D             R T C _ T A M P E R M A S K _ F L A G _ E N A B L E 
 # d e f i n e   R T C _ T A M P E R E R A S E B A C K U P _ E N A B L E D       R T C _ T A M P E R _ E R A S E _ B A C K U P _ E N A B L E 
 # d e f i n e   R T C _ T A M P E R 1 _ 2 _ I N T E R R U P T                   R T C _ A L L _ T A M P E R _ I N T E R R U P T 
 # d e f i n e   R T C _ T A M P E R 1 _ 2 _ 3 _ I N T E R R U P T               R T C _ A L L _ T A M P E R _ I N T E R R U P T 
 
 # d e f i n e   R T C _ T I M E S T A M P P I N _ P C 1 3     R T C _ T I M E S T A M P P I N _ D E F A U L T 
 # d e f i n e   R T C _ T I M E S T A M P P I N _ P A 0   R T C _ T I M E S T A M P P I N _ P O S 1 
 # d e f i n e   R T C _ T I M E S T A M P P I N _ P I 8   R T C _ T I M E S T A M P P I N _ P O S 1 
 # d e f i n e   R T C _ T I M E S T A M P P I N _ P C 1       R T C _ T I M E S T A M P P I N _ P O S 2 
 
 # d e f i n e   R T C _ O U T P U T _ R E M A P _ P C 1 3     R T C _ O U T P U T _ R E M A P _ N O N E 
 # d e f i n e   R T C _ O U T P U T _ R E M A P _ P B 1 4     R T C _ O U T P U T _ R E M A P _ P O S 1 
 # d e f i n e   R T C _ O U T P U T _ R E M A P _ P B 2       R T C _ O U T P U T _ R E M A P _ P O S 1 
 
 # d e f i n e   R T C _ T A M P E R P I N _ P C 1 3   R T C _ T A M P E R P I N _ D E F A U L T 
 # d e f i n e   R T C _ T A M P E R P I N _ P A 0     R T C _ T A M P E R P I N _ P O S 1 
 # d e f i n e   R T C _ T A M P E R P I N _ P I 8     R T C _ T A M P E R P I N _ P O S 1 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   R T C _ T A M P C R _ T A M P X E                     R T C _ T A M P E R _ X 
 # d e f i n e   R T C _ T A M P C R _ T A M P X I E                   R T C _ T A M P E R _ X _ I N T E R R U P T 
 
 # d e f i n e   R T C _ T A M P E R 1 _ I N T E R R U P T             R T C _ I T _ T A M P 1 
 # d e f i n e   R T C _ T A M P E R 2 _ I N T E R R U P T             R T C _ I T _ T A M P 2 
 # d e f i n e   R T C _ T A M P E R 3 _ I N T E R R U P T             R T C _ I T _ T A M P 3 
 # d e f i n e   R T C _ A L L _ T A M P E R _ I N T E R R U P T       R T C _ I T _ T A M P A L L 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ S M A R T C A R D _ A l i a s e d _ D e f i n e s   H A L   S M A R T C A R D   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   S M A R T C A R D _ N A C K _ E N A B L E D                                     S M A R T C A R D _ N A C K _ E N A B L E 
 # d e f i n e   S M A R T C A R D _ N A C K _ D I S A B L E D                                   S M A R T C A R D _ N A C K _ D I S A B L E 
 
 # d e f i n e   S M A R T C A R D _ O N E B I T _ S A M P L I N G _ D I S A B L E D             S M A R T C A R D _ O N E _ B I T _ S A M P L E _ D I S A B L E 
 # d e f i n e   S M A R T C A R D _ O N E B I T _ S A M P L I N G _ E N A B L E D               S M A R T C A R D _ O N E _ B I T _ S A M P L E _ E N A B L E 
 # d e f i n e   S M A R T C A R D _ O N E B I T _ S A M P L I N G _ D I S A B L E               S M A R T C A R D _ O N E _ B I T _ S A M P L E _ D I S A B L E 
 # d e f i n e   S M A R T C A R D _ O N E B I T _ S A M P L I N G _ E N A B L E                 S M A R T C A R D _ O N E _ B I T _ S A M P L E _ E N A B L E 
 
 # d e f i n e   S M A R T C A R D _ T I M E O U T _ D I S A B L E D                             S M A R T C A R D _ T I M E O U T _ D I S A B L E 
 # d e f i n e   S M A R T C A R D _ T I M E O U T _ E N A B L E D                               S M A R T C A R D _ T I M E O U T _ E N A B L E 
 
 # d e f i n e   S M A R T C A R D _ L A S T B I T _ D I S A B L E D                             S M A R T C A R D _ L A S T B I T _ D I S A B L E 
 # d e f i n e   S M A R T C A R D _ L A S T B I T _ E N A B L E D                               S M A R T C A R D _ L A S T B I T _ E N A B L E 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ S M B U S _ A l i a s e d _ D e f i n e s   H A L   S M B U S   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   S M B U S _ D U A L A D D R E S S _ D I S A B L E D             S M B U S _ D U A L A D D R E S S _ D I S A B L E 
 # d e f i n e   S M B U S _ D U A L A D D R E S S _ E N A B L E D               S M B U S _ D U A L A D D R E S S _ E N A B L E 
 # d e f i n e   S M B U S _ G E N E R A L C A L L _ D I S A B L E D             S M B U S _ G E N E R A L C A L L _ D I S A B L E 
 # d e f i n e   S M B U S _ G E N E R A L C A L L _ E N A B L E D               S M B U S _ G E N E R A L C A L L _ E N A B L E 
 # d e f i n e   S M B U S _ N O S T R E T C H _ D I S A B L E D                 S M B U S _ N O S T R E T C H _ D I S A B L E 
 # d e f i n e   S M B U S _ N O S T R E T C H _ E N A B L E D                   S M B U S _ N O S T R E T C H _ E N A B L E 
 # d e f i n e   S M B U S _ A N A L O G F I L T E R _ E N A B L E D             S M B U S _ A N A L O G F I L T E R _ E N A B L E 
 # d e f i n e   S M B U S _ A N A L O G F I L T E R _ D I S A B L E D           S M B U S _ A N A L O G F I L T E R _ D I S A B L E 
 # d e f i n e   S M B U S _ P E C _ D I S A B L E D                             S M B U S _ P E C _ D I S A B L E 
 # d e f i n e   S M B U S _ P E C _ E N A B L E D                               S M B U S _ P E C _ E N A B L E 
 # d e f i n e   H A L _ S M B U S _ S T A T E _ S L A V E _ L I S T E N         H A L _ S M B U S _ S T A T E _ L I S T E N 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S P I _ A l i a s e d _ D e f i n e s   H A L   S P I   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   S P I _ T I M O D E _ D I S A B L E D                           S P I _ T I M O D E _ D I S A B L E 
 # d e f i n e   S P I _ T I M O D E _ E N A B L E D                             S P I _ T I M O D E _ E N A B L E 
 
 # d e f i n e   S P I _ C R C C A L C U L A T I O N _ D I S A B L E D           S P I _ C R C C A L C U L A T I O N _ D I S A B L E 
 # d e f i n e   S P I _ C R C C A L C U L A T I O N _ E N A B L E D             S P I _ C R C C A L C U L A T I O N _ E N A B L E 
 
 # d e f i n e   S P I _ N S S _ P U L S E _ D I S A B L E D                     S P I _ N S S _ P U L S E _ D I S A B L E 
 # d e f i n e   S P I _ N S S _ P U L S E _ E N A B L E D                       S P I _ N S S _ P U L S E _ E N A B L E 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 
   # d e f i n e   S P I _ F L A G _ T X E                                         S P I _ F L A G _ T X P 
   # d e f i n e   S P I _ F L A G _ R X N E                                       S P I _ F L A G _ R X P 
 
   # d e f i n e   S P I _ I T _ T X E                                             S P I _ I T _ T X P 
   # d e f i n e   S P I _ I T _ R X N E                                           S P I _ I T _ R X P 
 
   # d e f i n e   S P I _ F R L V L _ E M P T Y                                   S P I _ R X _ F I F O _ 0 P A C K E T 
   # d e f i n e   S P I _ F R L V L _ Q U A R T E R _ F U L L                     S P I _ R X _ F I F O _ 1 P A C K E T 
   # d e f i n e   S P I _ F R L V L _ H A L F _ F U L L                           S P I _ R X _ F I F O _ 2 P A C K E T 
   # d e f i n e   S P I _ F R L V L _ F U L L                                     S P I _ R X _ F I F O _ 3 P A C K E T 
 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ T I M _ A l i a s e d _ D e f i n e s   H A L   T I M   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   C C E R _ C C x E _ M A S K                                       T I M _ C C E R _ C C x E _ M A S K 
 # d e f i n e   C C E R _ C C x N E _ M A S K                                     T I M _ C C E R _ C C x N E _ M A S K 
 
 # d e f i n e   T I M _ D M A B a s e _ C R 1                                     T I M _ D M A B A S E _ C R 1 
 # d e f i n e   T I M _ D M A B a s e _ C R 2                                     T I M _ D M A B A S E _ C R 2 
 # d e f i n e   T I M _ D M A B a s e _ S M C R                                   T I M _ D M A B A S E _ S M C R 
 # d e f i n e   T I M _ D M A B a s e _ D I E R                                   T I M _ D M A B A S E _ D I E R 
 # d e f i n e   T I M _ D M A B a s e _ S R                                       T I M _ D M A B A S E _ S R 
 # d e f i n e   T I M _ D M A B a s e _ E G R                                     T I M _ D M A B A S E _ E G R 
 # d e f i n e   T I M _ D M A B a s e _ C C M R 1                                 T I M _ D M A B A S E _ C C M R 1 
 # d e f i n e   T I M _ D M A B a s e _ C C M R 2                                 T I M _ D M A B A S E _ C C M R 2 
 # d e f i n e   T I M _ D M A B a s e _ C C E R                                   T I M _ D M A B A S E _ C C E R 
 # d e f i n e   T I M _ D M A B a s e _ C N T                                     T I M _ D M A B A S E _ C N T 
 # d e f i n e   T I M _ D M A B a s e _ P S C                                     T I M _ D M A B A S E _ P S C 
 # d e f i n e   T I M _ D M A B a s e _ A R R                                     T I M _ D M A B A S E _ A R R 
 # d e f i n e   T I M _ D M A B a s e _ R C R                                     T I M _ D M A B A S E _ R C R 
 # d e f i n e   T I M _ D M A B a s e _ C C R 1                                   T I M _ D M A B A S E _ C C R 1 
 # d e f i n e   T I M _ D M A B a s e _ C C R 2                                   T I M _ D M A B A S E _ C C R 2 
 # d e f i n e   T I M _ D M A B a s e _ C C R 3                                   T I M _ D M A B A S E _ C C R 3 
 # d e f i n e   T I M _ D M A B a s e _ C C R 4                                   T I M _ D M A B A S E _ C C R 4 
 # d e f i n e   T I M _ D M A B a s e _ B D T R                                   T I M _ D M A B A S E _ B D T R 
 # d e f i n e   T I M _ D M A B a s e _ D C R                                     T I M _ D M A B A S E _ D C R 
 # d e f i n e   T I M _ D M A B a s e _ D M A R                                   T I M _ D M A B A S E _ D M A R 
 # d e f i n e   T I M _ D M A B a s e _ O R 1                                     T I M _ D M A B A S E _ O R 1 
 # d e f i n e   T I M _ D M A B a s e _ C C M R 3                                 T I M _ D M A B A S E _ C C M R 3 
 # d e f i n e   T I M _ D M A B a s e _ C C R 5                                   T I M _ D M A B A S E _ C C R 5 
 # d e f i n e   T I M _ D M A B a s e _ C C R 6                                   T I M _ D M A B A S E _ C C R 6 
 # d e f i n e   T I M _ D M A B a s e _ O R 2                                     T I M _ D M A B A S E _ O R 2 
 # d e f i n e   T I M _ D M A B a s e _ O R 3                                     T I M _ D M A B A S E _ O R 3 
 # d e f i n e   T I M _ D M A B a s e _ O R                                       T I M _ D M A B A S E _ O R 
 
 # d e f i n e   T I M _ E v e n t S o u r c e _ U p d a t e                       T I M _ E V E N T S O U R C E _ U P D A T E 
 # d e f i n e   T I M _ E v e n t S o u r c e _ C C 1                             T I M _ E V E N T S O U R C E _ C C 1 
 # d e f i n e   T I M _ E v e n t S o u r c e _ C C 2                             T I M _ E V E N T S O U R C E _ C C 2 
 # d e f i n e   T I M _ E v e n t S o u r c e _ C C 3                             T I M _ E V E N T S O U R C E _ C C 3 
 # d e f i n e   T I M _ E v e n t S o u r c e _ C C 4                             T I M _ E V E N T S O U R C E _ C C 4 
 # d e f i n e   T I M _ E v e n t S o u r c e _ C O M                             T I M _ E V E N T S O U R C E _ C O M 
 # d e f i n e   T I M _ E v e n t S o u r c e _ T r i g g e r                     T I M _ E V E N T S O U R C E _ T R I G G E R 
 # d e f i n e   T I M _ E v e n t S o u r c e _ B r e a k                         T I M _ E V E N T S O U R C E _ B R E A K 
 # d e f i n e   T I M _ E v e n t S o u r c e _ B r e a k 2                       T I M _ E V E N T S O U R C E _ B R E A K 2 
 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 T r a n s f e r           T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 2 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 2 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 3 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 3 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 4 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 4 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 5 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 5 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 6 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 6 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 7 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 7 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 8 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 8 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 9 T r a n s f e r s         T I M _ D M A B U R S T L E N G T H _ 9 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 0 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 0 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 1 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 1 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 2 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 2 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 3 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 3 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 4 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 4 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 5 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 5 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 6 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 6 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 7 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 7 T R A N S F E R S 
 # d e f i n e   T I M _ D M A B u r s t L e n g t h _ 1 8 T r a n s f e r s       T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S 
 
 # i f   d e f i n e d ( S T M 3 2 L 0 ) 
 # d e f i n e   T I M 2 2 _ T I 1 _ G P I O 1       T I M 2 2 _ T I 1 _ G P I O 
 # d e f i n e   T I M 2 2 _ T I 1 _ G P I O 2       T I M 2 2 _ T I 1 _ G P I O 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 3 ) 
 # d e f i n e   I S _ T I M _ H A L L _ I N T E R F A C E _ I N S T A N C E       I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   T I M _ T I M 1 _ E T R _ C O M P 1 _ O U T                 T I M _ T I M 1 _ E T R _ C O M P 1 
 # d e f i n e   T I M _ T I M 1 _ E T R _ C O M P 2 _ O U T                 T I M _ T I M 1 _ E T R _ C O M P 2 
 # d e f i n e   T I M _ T I M 8 _ E T R _ C O M P 1 _ O U T                 T I M _ T I M 8 _ E T R _ C O M P 1 
 # d e f i n e   T I M _ T I M 8 _ E T R _ C O M P 2 _ O U T                 T I M _ T I M 8 _ E T R _ C O M P 2 
 # d e f i n e   T I M _ T I M 2 _ E T R _ C O M P 1 _ O U T                 T I M _ T I M 2 _ E T R _ C O M P 1 
 # d e f i n e   T I M _ T I M 2 _ E T R _ C O M P 2 _ O U T                 T I M _ T I M 2 _ E T R _ C O M P 2 
 # d e f i n e   T I M _ T I M 3 _ E T R _ C O M P 1 _ O U T                 T I M _ T I M 3 _ E T R _ C O M P 1 
 # d e f i n e   T I M _ T I M 1 _ T I 1 _ C O M P 1 _ O U T                 T I M _ T I M 1 _ T I 1 _ C O M P 1 
 # d e f i n e   T I M _ T I M 8 _ T I 1 _ C O M P 2 _ O U T                 T I M _ T I M 8 _ T I 1 _ C O M P 2 
 # d e f i n e   T I M _ T I M 2 _ T I 4 _ C O M P 1 _ O U T                 T I M _ T I M 2 _ T I 4 _ C O M P 1 
 # d e f i n e   T I M _ T I M 2 _ T I 4 _ C O M P 2 _ O U T                 T I M _ T I M 2 _ T I 4 _ C O M P 2 
 # d e f i n e   T I M _ T I M 2 _ T I 4 _ C O M P 1 C O M P 2 _ O U T       T I M _ T I M 2 _ T I 4 _ C O M P 1 _ C O M P 2 
 # d e f i n e   T I M _ T I M 3 _ T I 1 _ C O M P 1 _ O U T                 T I M _ T I M 3 _ T I 1 _ C O M P 1 
 # d e f i n e   T I M _ T I M 3 _ T I 1 _ C O M P 2 _ O U T                 T I M _ T I M 3 _ T I 1 _ C O M P 2 
 # d e f i n e   T I M _ T I M 3 _ T I 1 _ C O M P 1 C O M P 2 _ O U T       T I M _ T I M 3 _ T I 1 _ C O M P 1 _ C O M P 2 
 # e n d i f 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ T S C _ A l i a s e d _ D e f i n e s   H A L   T S C   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   T S C _ S Y N C _ P O L _ F A L L                 T S C _ S Y N C _ P O L A R I T Y _ F A L L I N G 
 # d e f i n e   T S C _ S Y N C _ P O L _ R I S E _ H I G H       T S C _ S Y N C _ P O L A R I T Y _ R I S I N G 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ U A R T _ A l i a s e d _ D e f i n e s   H A L   U A R T   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   U A R T _ O N E B I T _ S A M P L I N G _ D I S A B L E D       U A R T _ O N E _ B I T _ S A M P L E _ D I S A B L E 
 # d e f i n e   U A R T _ O N E B I T _ S A M P L I N G _ E N A B L E D         U A R T _ O N E _ B I T _ S A M P L E _ E N A B L E 
 # d e f i n e   U A R T _ O N E _ B I T _ S A M P L E _ D I S A B L E D         U A R T _ O N E _ B I T _ S A M P L E _ D I S A B L E 
 # d e f i n e   U A R T _ O N E _ B I T _ S A M P L E _ E N A B L E D           U A R T _ O N E _ B I T _ S A M P L E _ E N A B L E 
 
 # d e f i n e   _ _ H A L _ U A R T _ O N E B I T _ E N A B L E                 _ _ H A L _ U A R T _ O N E _ B I T _ S A M P L E _ E N A B L E 
 # d e f i n e   _ _ H A L _ U A R T _ O N E B I T _ D I S A B L E               _ _ H A L _ U A R T _ O N E _ B I T _ S A M P L E _ D I S A B L E 
 
 # d e f i n e   _ _ D I V _ S A M P L I N G 1 6                                 U A R T _ D I V _ S A M P L I N G 1 6 
 # d e f i n e   _ _ D I V M A N T _ S A M P L I N G 1 6                         U A R T _ D I V M A N T _ S A M P L I N G 1 6 
 # d e f i n e   _ _ D I V F R A Q _ S A M P L I N G 1 6                         U A R T _ D I V F R A Q _ S A M P L I N G 1 6 
 # d e f i n e   _ _ U A R T _ B R R _ S A M P L I N G 1 6                       U A R T _ B R R _ S A M P L I N G 1 6 
 
 # d e f i n e   _ _ D I V _ S A M P L I N G 8                                   U A R T _ D I V _ S A M P L I N G 8 
 # d e f i n e   _ _ D I V M A N T _ S A M P L I N G 8                           U A R T _ D I V M A N T _ S A M P L I N G 8 
 # d e f i n e   _ _ D I V F R A Q _ S A M P L I N G 8                           U A R T _ D I V F R A Q _ S A M P L I N G 8 
 # d e f i n e   _ _ U A R T _ B R R _ S A M P L I N G 8                         U A R T _ B R R _ S A M P L I N G 8 
 
 # d e f i n e   _ _ D I V _ L P U A R T                                         U A R T _ D I V _ L P U A R T 
 
 # d e f i n e   U A R T _ W A K E U P M E T H O D E _ I D L E L I N E           U A R T _ W A K E U P M E T H O D _ I D L E L I N E 
 # d e f i n e   U A R T _ W A K E U P M E T H O D E _ A D D R E S S M A R K     U A R T _ W A K E U P M E T H O D _ A D D R E S S M A R K 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ U S A R T _ A l i a s e d _ D e f i n e s   H A L   U S A R T   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   U S A R T _ C L O C K _ D I S A B L E D                         U S A R T _ C L O C K _ D I S A B L E 
 # d e f i n e   U S A R T _ C L O C K _ E N A B L E D                           U S A R T _ C L O C K _ E N A B L E 
 
 # d e f i n e   U S A R T N A C K _ E N A B L E D                               U S A R T _ N A C K _ E N A B L E 
 # d e f i n e   U S A R T N A C K _ D I S A B L E D                             U S A R T _ N A C K _ D I S A B L E 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ W W D G _ A l i a s e d _ D e f i n e s   H A L   W W D G   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   C F R _ B A S E                                         W W D G _ C F R _ B A S E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ C A N _ A l i a s e d _ D e f i n e s   H A L   C A N   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   C A N _ F i l t e r F I F O 0                           C A N _ F I L T E R _ F I F O 0 
 # d e f i n e   C A N _ F i l t e r F I F O 1                           C A N _ F I L T E R _ F I F O 1 
 # d e f i n e   C A N _ I T _ R Q C P 0                                 C A N _ I T _ T M E 
 # d e f i n e   C A N _ I T _ R Q C P 1                                 C A N _ I T _ T M E 
 # d e f i n e   C A N _ I T _ R Q C P 2                                 C A N _ I T _ T M E 
 # d e f i n e   I N A K _ T I M E O U T                                 C A N _ T I M E O U T _ V A L U E 
 # d e f i n e   S L A K _ T I M E O U T                                 C A N _ T I M E O U T _ V A L U E 
 # d e f i n e   C A N _ T X S T A T U S _ F A I L E D                   ( ( u i n t 8 _ t ) 0 x 0 0 U ) 
 # d e f i n e   C A N _ T X S T A T U S _ O K                           ( ( u i n t 8 _ t ) 0 x 0 1 U ) 
 # d e f i n e   C A N _ T X S T A T U S _ P E N D I N G                 ( ( u i n t 8 _ t ) 0 x 0 2 U ) 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ E T H _ A l i a s e d _ D e f i n e s   H A L   E T H   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   V L A N _ T A G                                 E T H _ V L A N _ T A G 
 # d e f i n e   M I N _ E T H _ P A Y L O A D                   E T H _ M I N _ E T H _ P A Y L O A D 
 # d e f i n e   M A X _ E T H _ P A Y L O A D                   E T H _ M A X _ E T H _ P A Y L O A D 
 # d e f i n e   J U M B O _ F R A M E _ P A Y L O A D           E T H _ J U M B O _ F R A M E _ P A Y L O A D 
 # d e f i n e   M A C M I I A R _ C R _ M A S K                 E T H _ M A C M I I A R _ C R _ M A S K 
 # d e f i n e   M A C C R _ C L E A R _ M A S K                 E T H _ M A C C R _ C L E A R _ M A S K 
 # d e f i n e   M A C F C R _ C L E A R _ M A S K               E T H _ M A C F C R _ C L E A R _ M A S K 
 # d e f i n e   D M A O M R _ C L E A R _ M A S K               E T H _ D M A O M R _ C L E A R _ M A S K 
 
 # d e f i n e   E T H _ M M C C R                             0 x 0 0 0 0 0 1 0 0 U 
 # d e f i n e   E T H _ M M C R I R                           0 x 0 0 0 0 0 1 0 4 U 
 # d e f i n e   E T H _ M M C T I R                           0 x 0 0 0 0 0 1 0 8 U 
 # d e f i n e   E T H _ M M C R I M R                         0 x 0 0 0 0 0 1 0 C U 
 # d e f i n e   E T H _ M M C T I M R                         0 x 0 0 0 0 0 1 1 0 U 
 # d e f i n e   E T H _ M M C T G F S C C R                   0 x 0 0 0 0 0 1 4 C U 
 # d e f i n e   E T H _ M M C T G F M S C C R                 0 x 0 0 0 0 0 1 5 0 U 
 # d e f i n e   E T H _ M M C T G F C R                       0 x 0 0 0 0 0 1 6 8 U 
 # d e f i n e   E T H _ M M C R F C E C R                     0 x 0 0 0 0 0 1 9 4 U 
 # d e f i n e   E T H _ M M C R F A E C R                     0 x 0 0 0 0 0 1 9 8 U 
 # d e f i n e   E T H _ M M C R G U F C R                     0 x 0 0 0 0 0 1 C 4 U 
 
 # d e f i n e   E T H _ M A C _ T X F I F O _ F U L L                                                           0 x 0 2 0 0 0 0 0 0 U     / *   T x   F I F O   f u l l   * / 
 # d e f i n e   E T H _ M A C _ T X F I F O N O T _ E M P T Y                                                   0 x 0 1 0 0 0 0 0 0 U     / *   T x   F I F O   n o t   e m p t y   * / 
 # d e f i n e   E T H _ M A C _ T X F I F O _ W R I T E _ A C T I V E                                           0 x 0 0 4 0 0 0 0 0 U     / *   T x   F I F O   w r i t e   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ T X F I F O _ I D L E                                                           0 x 0 0 0 0 0 0 0 0 U     / *   T x   F I F O   r e a d   s t a t u s :   I d l e   * / 
 # d e f i n e   E T H _ M A C _ T X F I F O _ R E A D                                                           0 x 0 0 1 0 0 0 0 0 U     / *   T x   F I F O   r e a d   s t a t u s :   R e a d   ( t r a n s f e r r i n g   d a t a   t o   t h e   M A C   t r a n s m i t t e r )   * / 
 # d e f i n e   E T H _ M A C _ T X F I F O _ W A I T I N G                                                     0 x 0 0 2 0 0 0 0 0 U     / *   T x   F I F O   r e a d   s t a t u s :   W a i t i n g   f o r   T x S t a t u s   f r o m   M A C   t r a n s m i t t e r   * / 
 # d e f i n e   E T H _ M A C _ T X F I F O _ W R I T I N G                                                     0 x 0 0 3 0 0 0 0 0 U     / *   T x   F I F O   r e a d   s t a t u s :   W r i t i n g   t h e   r e c e i v e d   T x S t a t u s   o r   f l u s h i n g   t h e   T x F I F O   * / 
 # d e f i n e   E T H _ M A C _ T R A N S M I S S I O N _ P A U S E                                             0 x 0 0 0 8 0 0 0 0 U     / *   M A C   t r a n s m i t t e r   i n   p a u s e   * / 
 # d e f i n e   E T H _ M A C _ T R A N S M I T F R A M E C O N T R O L L E R _ I D L E                         0 x 0 0 0 0 0 0 0 0 U     / *   M A C   t r a n s m i t   f r a m e   c o n t r o l l e r :   I d l e   * / 
 # d e f i n e   E T H _ M A C _ T R A N S M I T F R A M E C O N T R O L L E R _ W A I T I N G                   0 x 0 0 0 2 0 0 0 0 U     / *   M A C   t r a n s m i t   f r a m e   c o n t r o l l e r :   W a i t i n g   f o r   S t a t u s   o f   p r e v i o u s   f r a m e   o r   I F G / b a c k o f f   p e r i o d   t o   b e   o v e r   * / 
 # d e f i n e   E T H _ M A C _ T R A N S M I T F R A M E C O N T R O L L E R _ G E N R A T I N G _ P C F       0 x 0 0 0 4 0 0 0 0 U     / *   M A C   t r a n s m i t   f r a m e   c o n t r o l l e r :   G e n e r a t i n g   a n d   t r a n s m i t t i n g   a   P a u s e   c o n t r o l   f r a m e   ( i n   f u l l   d u p l e x   m o d e )   * / 
 # d e f i n e   E T H _ M A C _ T R A N S M I T F R A M E C O N T R O L L E R _ T R A N S F E R R I N G         0 x 0 0 0 6 0 0 0 0 U     / *   M A C   t r a n s m i t   f r a m e   c o n t r o l l e r :   T r a n s f e r r i n g   i n p u t   f r a m e   f o r   t r a n s m i s s i o n   * / 
 # d e f i n e   E T H _ M A C _ M I I _ T R A N S M I T _ A C T I V E                       0 x 0 0 0 1 0 0 0 0 U     / *   M A C   M I I   t r a n s m i t   e n g i n e   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ R X F I F O _ E M P T Y                                     0 x 0 0 0 0 0 0 0 0 U     / *   R x   F I F O   f i l l   l e v e l :   e m p t y   * / 
 # d e f i n e   E T H _ M A C _ R X F I F O _ B E L O W _ T H R E S H O L D                 0 x 0 0 0 0 0 1 0 0 U     / *   R x   F I F O   f i l l   l e v e l :   f i l l - l e v e l   b e l o w   f l o w - c o n t r o l   d e - a c t i v a t e   t h r e s h o l d   * / 
 # d e f i n e   E T H _ M A C _ R X F I F O _ A B O V E _ T H R E S H O L D                 0 x 0 0 0 0 0 2 0 0 U     / *   R x   F I F O   f i l l   l e v e l :   f i l l - l e v e l   a b o v e   f l o w - c o n t r o l   a c t i v a t e   t h r e s h o l d   * / 
 # d e f i n e   E T H _ M A C _ R X F I F O _ F U L L                                       0 x 0 0 0 0 0 3 0 0 U     / *   R x   F I F O   f i l l   l e v e l :   f u l l   * / 
 # i f   d e f i n e d ( S T M 3 2 F 1 ) 
 # e l s e 
 # d e f i n e   E T H _ M A C _ R E A D C O N T R O L L E R _ I D L E                       0 x 0 0 0 0 0 0 0 0 U     / *   R x   F I F O   r e a d   c o n t r o l l e r   I D L E   s t a t e   * / 
 # d e f i n e   E T H _ M A C _ R E A D C O N T R O L L E R _ R E A D I N G _ D A T A       0 x 0 0 0 0 0 0 2 0 U     / *   R x   F I F O   r e a d   c o n t r o l l e r   R e a d i n g   f r a m e   d a t a   * / 
 # d e f i n e   E T H _ M A C _ R E A D C O N T R O L L E R _ R E A D I N G _ S T A T U S   0 x 0 0 0 0 0 0 4 0 U     / *   R x   F I F O   r e a d   c o n t r o l l e r   R e a d i n g   f r a m e   s t a t u s   ( o r   t i m e - s t a m p )   * / 
 # e n d i f 
 # d e f i n e   E T H _ M A C _ R E A D C O N T R O L L E R _ F L U S H I N G               0 x 0 0 0 0 0 0 6 0 U     / *   R x   F I F O   r e a d   c o n t r o l l e r   F l u s h i n g   t h e   f r a m e   d a t a   a n d   s t a t u s   * / 
 # d e f i n e   E T H _ M A C _ R X F I F O _ W R I T E _ A C T I V E                       0 x 0 0 0 0 0 0 1 0 U     / *   R x   F I F O   w r i t e   c o n t r o l l e r   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ S M A L L _ F I F O _ N O T A C T I V E                     0 x 0 0 0 0 0 0 0 0 U     / *   M A C   s m a l l   F I F O   r e a d   /   w r i t e   c o n t r o l l e r s   n o t   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ S M A L L _ F I F O _ R E A D _ A C T I V E                 0 x 0 0 0 0 0 0 0 2 U     / *   M A C   s m a l l   F I F O   r e a d   c o n t r o l l e r   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ S M A L L _ F I F O _ W R I T E _ A C T I V E               0 x 0 0 0 0 0 0 0 4 U     / *   M A C   s m a l l   F I F O   w r i t e   c o n t r o l l e r   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ S M A L L _ F I F O _ R W _ A C T I V E                     0 x 0 0 0 0 0 0 0 6 U     / *   M A C   s m a l l   F I F O   r e a d   /   w r i t e   c o n t r o l l e r s   a c t i v e   * / 
 # d e f i n e   E T H _ M A C _ M I I _ R E C E I V E _ P R O T O C O L _ A C T I V E       0 x 0 0 0 0 0 0 0 1 U     / *   M A C   M I I   r e c e i v e   p r o t o c o l   e n g i n e   a c t i v e   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ D C M I _ A l i a s e d _ D e f i n e s   H A L   D C M I   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ D C M I _ E R R O R _ O V F             H A L _ D C M I _ E R R O R _ O V R 
 # d e f i n e   D C M I _ I T _ O V F                           D C M I _ I T _ O V R 
 # d e f i n e   D C M I _ F L A G _ O V F R I                   D C M I _ F L A G _ O V R R I 
 # d e f i n e   D C M I _ F L A G _ O V F M I                   D C M I _ F L A G _ O V R M I 
 
 # d e f i n e   H A L _ D C M I _ C o n f i g C R O P           H A L _ D C M I _ C o n f i g C r o p 
 # d e f i n e   H A L _ D C M I _ E n a b l e C R O P           H A L _ D C M I _ E n a b l e C r o p 
 # d e f i n e   H A L _ D C M I _ D i s a b l e C R O P         H A L _ D C M I _ D i s a b l e C r o p 
 
 / * * 
     *   @ } 
     * / 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 F 4 2 7 x x )   | |   d e f i n e d ( S T M 3 2 F 4 3 7 x x )   \ 
     | |   d e f i n e d ( S T M 3 2 F 4 2 9 x x )   | |   d e f i n e d ( S T M 3 2 F 4 3 9 x x )   | |   d e f i n e d ( S T M 3 2 F 4 6 9 x x )   | |   d e f i n e d ( S T M 3 2 F 4 7 9 x x )   \ 
     | |   d e f i n e d ( S T M 3 2 H 7 ) 
 / * *   @ d e f g r o u p   H A L _ D M A 2 D _ A l i a s e d _ D e f i n e s   H A L   D M A 2 D   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   D M A 2 D _ A R G B 8 8 8 8                     D M A 2 D _ O U T P U T _ A R G B 8 8 8 8 
 # d e f i n e   D M A 2 D _ R G B 8 8 8                         D M A 2 D _ O U T P U T _ R G B 8 8 8 
 # d e f i n e   D M A 2 D _ R G B 5 6 5                         D M A 2 D _ O U T P U T _ R G B 5 6 5 
 # d e f i n e   D M A 2 D _ A R G B 1 5 5 5                     D M A 2 D _ O U T P U T _ A R G B 1 5 5 5 
 # d e f i n e   D M A 2 D _ A R G B 4 4 4 4                     D M A 2 D _ O U T P U T _ A R G B 4 4 4 4 
 
 # d e f i n e   C M _ A R G B 8 8 8 8                           D M A 2 D _ I N P U T _ A R G B 8 8 8 8 
 # d e f i n e   C M _ R G B 8 8 8                               D M A 2 D _ I N P U T _ R G B 8 8 8 
 # d e f i n e   C M _ R G B 5 6 5                               D M A 2 D _ I N P U T _ R G B 5 6 5 
 # d e f i n e   C M _ A R G B 1 5 5 5                           D M A 2 D _ I N P U T _ A R G B 1 5 5 5 
 # d e f i n e   C M _ A R G B 4 4 4 4                           D M A 2 D _ I N P U T _ A R G B 4 4 4 4 
 # d e f i n e   C M _ L 8                                       D M A 2 D _ I N P U T _ L 8 
 # d e f i n e   C M _ A L 4 4                                   D M A 2 D _ I N P U T _ A L 4 4 
 # d e f i n e   C M _ A L 8 8                                   D M A 2 D _ I N P U T _ A L 8 8 
 # d e f i n e   C M _ L 4                                       D M A 2 D _ I N P U T _ L 4 
 # d e f i n e   C M _ A 8                                       D M A 2 D _ I N P U T _ A 8 
 # d e f i n e   C M _ A 4                                       D M A 2 D _ I N P U T _ A 4 
 / * * 
     *   @ } 
     * / 
 # e n d i f     / *   S T M 3 2 L 4   | |     S T M 3 2 F 7   | |     S T M 3 2 F 4   | |     S T M 3 2 H 7   * / 
 
 / * *   @ d e f g r o u p   H A L _ P P P _ A l i a s e d _ D e f i n e s   H A L   P P P   A l i a s e d   D e f i n e s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   H A L _ C R Y P _ A l i a s e d _ F u n c t i o n s   H A L   C R Y P   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ C R Y P _ C o m p u t a t i o n C p l t C a l l b a c k           H A L _ C R Y P E x _ C o m p u t a t i o n C p l t C a l l b a c k 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ H A S H _ A l i a s e d _ F u n c t i o n s   H A L   H A S H   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ H A S H _ S T A T E T y p e D e f                 H A L _ H A S H _ S t a t e T y p e D e f 
 # d e f i n e   H A L _ H A S H P h a s e T y p e D e f                   H A L _ H A S H _ P h a s e T y p e D e f 
 # d e f i n e   H A L _ H M A C _ M D 5 _ F i n i s h                     H A L _ H A S H _ M D 5 _ F i n i s h 
 # d e f i n e   H A L _ H M A C _ S H A 1 _ F i n i s h                   H A L _ H A S H _ S H A 1 _ F i n i s h 
 # d e f i n e   H A L _ H M A C _ S H A 2 2 4 _ F i n i s h               H A L _ H A S H _ S H A 2 2 4 _ F i n i s h 
 # d e f i n e   H A L _ H M A C _ S H A 2 5 6 _ F i n i s h               H A L _ H A S H _ S H A 2 5 6 _ F i n i s h 
 
 / * H A S H   A l g o r i t h m   S e l e c t i o n * / 
 
 # d e f i n e   H A S H _ A l g o S e l e c t i o n _ S H A 1             H A S H _ A L G O S E L E C T I O N _ S H A 1 
 # d e f i n e   H A S H _ A l g o S e l e c t i o n _ S H A 2 2 4         H A S H _ A L G O S E L E C T I O N _ S H A 2 2 4 
 # d e f i n e   H A S H _ A l g o S e l e c t i o n _ S H A 2 5 6         H A S H _ A L G O S E L E C T I O N _ S H A 2 5 6 
 # d e f i n e   H A S H _ A l g o S e l e c t i o n _ M D 5               H A S H _ A L G O S E L E C T I O N _ M D 5 
 
 # d e f i n e   H A S H _ A l g o M o d e _ H A S H                   H A S H _ A L G O M O D E _ H A S H 
 # d e f i n e   H A S H _ A l g o M o d e _ H M A C                   H A S H _ A L G O M O D E _ H M A C 
 
 # d e f i n e   H A S H _ H M A C K e y T y p e _ S h o r t K e y     H A S H _ H M A C _ K E Y T Y P E _ S H O R T K E Y 
 # d e f i n e   H A S H _ H M A C K e y T y p e _ L o n g K e y       H A S H _ H M A C _ K E Y T Y P E _ L O N G K E Y 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 L 5 )   | |   d e f i n e d ( S T M 3 2 F 2 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 H 7 ) 
 
 # d e f i n e   H A L _ H A S H _ M D 5 _ A c c u m u l a t e                                 H A L _ H A S H _ M D 5 _ A c c m l t 
 # d e f i n e   H A L _ H A S H _ M D 5 _ A c c u m u l a t e _ E n d                         H A L _ H A S H _ M D 5 _ A c c m l t _ E n d 
 # d e f i n e   H A L _ H A S H _ M D 5 _ A c c u m u l a t e _ I T                           H A L _ H A S H _ M D 5 _ A c c m l t _ I T 
 # d e f i n e   H A L _ H A S H _ M D 5 _ A c c u m u l a t e _ E n d _ I T                   H A L _ H A S H _ M D 5 _ A c c m l t _ E n d _ I T 
 
 # d e f i n e   H A L _ H A S H _ S H A 1 _ A c c u m u l a t e                               H A L _ H A S H _ S H A 1 _ A c c m l t 
 # d e f i n e   H A L _ H A S H _ S H A 1 _ A c c u m u l a t e _ E n d                       H A L _ H A S H _ S H A 1 _ A c c m l t _ E n d 
 # d e f i n e   H A L _ H A S H _ S H A 1 _ A c c u m u l a t e _ I T                         H A L _ H A S H _ S H A 1 _ A c c m l t _ I T 
 # d e f i n e   H A L _ H A S H _ S H A 1 _ A c c u m u l a t e _ E n d _ I T                 H A L _ H A S H _ S H A 1 _ A c c m l t _ E n d _ I T 
 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 2 4 _ A c c u m u l a t e                       H A L _ H A S H E x _ S H A 2 2 4 _ A c c m l t 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 2 4 _ A c c u m u l a t e _ E n d               H A L _ H A S H E x _ S H A 2 2 4 _ A c c m l t _ E n d 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 2 4 _ A c c u m u l a t e _ I T                 H A L _ H A S H E x _ S H A 2 2 4 _ A c c m l t _ I T 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 2 4 _ A c c u m u l a t e _ E n d _ I T         H A L _ H A S H E x _ S H A 2 2 4 _ A c c m l t _ E n d _ I T 
 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 5 6 _ A c c u m u l a t e                       H A L _ H A S H E x _ S H A 2 5 6 _ A c c m l t 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 5 6 _ A c c u m u l a t e _ E n d               H A L _ H A S H E x _ S H A 2 5 6 _ A c c m l t _ E n d 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 5 6 _ A c c u m u l a t e _ I T                 H A L _ H A S H E x _ S H A 2 5 6 _ A c c m l t _ I T 
 # d e f i n e   H A L _ H A S H E x _ S H A 2 5 6 _ A c c u m u l a t e _ E n d _ I T         H A L _ H A S H E x _ S H A 2 5 6 _ A c c m l t _ E n d _ I T 
 
 # e n d i f     / *   S T M 3 2 L 4   | |   S T M 3 2 L 5   | |   S T M 3 2 F 2   | |   S T M 3 2 F 4   | |   S T M 3 2 F 7   | |   S T M 3 2 H 7   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ A l i a s e d _ F u n c t i o n s   H A L   G e n e r i c   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ E n a b l e D B G S l e e p M o d e   H A L _ D B G M C U _ E n a b l e D B G S l e e p M o d e 
 # d e f i n e   H A L _ D i s a b l e D B G S l e e p M o d e   H A L _ D B G M C U _ D i s a b l e D B G S l e e p M o d e 
 # d e f i n e   H A L _ E n a b l e D B G S t o p M o d e   H A L _ D B G M C U _ E n a b l e D B G S t o p M o d e 
 # d e f i n e   H A L _ D i s a b l e D B G S t o p M o d e   H A L _ D B G M C U _ D i s a b l e D B G S t o p M o d e 
 # d e f i n e   H A L _ E n a b l e D B G S t a n d b y M o d e   H A L _ D B G M C U _ E n a b l e D B G S t a n d b y M o d e 
 # d e f i n e   H A L _ D i s a b l e D B G S t a n d b y M o d e   H A L _ D B G M C U _ D i s a b l e D B G S t a n d b y M o d e 
 # d e f i n e   H A L _ D B G _ L o w P o w e r C o n f i g ( P e r i p h ,   c m d )   ( ( ( c m d ) = = E N A B L E ) ?   H A L _ D B G M C U _ D B G _ E n a b l e L o w P o w e r C o n f i g ( P e r i p h )   :   H A L _ D B G M C U _ D B G _ D i s a b l e L o w P o w e r C o n f i g ( P e r i p h ) ) 
 # d e f i n e   H A L _ V R E F I N T _ O u t p u t S e l e c t     H A L _ S Y S C F G _ V R E F I N T _ O u t p u t S e l e c t 
 # d e f i n e   H A L _ L o c k _ C m d ( c m d )   ( ( ( c m d ) = = E N A B L E )   ?   H A L _ S Y S C F G _ E n a b l e _ L o c k _ V R E F I N T ( )   :   H A L _ S Y S C F G _ D i s a b l e _ L o c k _ V R E F I N T ( ) ) 
 # i f   d e f i n e d ( S T M 3 2 L 0 ) 
 # e l s e 
 # d e f i n e   H A L _ V R E F I N T _ C m d ( c m d )   ( ( ( c m d ) = = E N A B L E ) ?   H A L _ S Y S C F G _ E n a b l e V R E F I N T ( )   :   H A L _ S Y S C F G _ D i s a b l e V R E F I N T ( ) ) 
 # e n d i f 
 # d e f i n e   H A L _ A D C _ E n a b l e B u f f e r _ C m d ( c m d )     ( ( ( c m d ) = = E N A B L E )   ?   H A L _ A D C E x _ E n a b l e V R E F I N T ( )   :   H A L _ A D C E x _ D i s a b l e V R E F I N T ( ) ) 
 # d e f i n e   H A L _ A D C _ E n a b l e B u f f e r S e n s o r _ C m d ( c m d )   ( ( ( c m d ) = = E N A B L E )   ?     H A L _ A D C E x _ E n a b l e V R E F I N T T e m p S e n s o r ( )   :   H A L _ A D C E x _ D i s a b l e V R E F I N T T e m p S e n s o r ( ) ) 
 # i f   d e f i n e d ( S T M 3 2 H 7 A 3 x x )   | |   d e f i n e d ( S T M 3 2 H 7 B 3 x x )   | |   d e f i n e d ( S T M 3 2 H 7 B 0 x x )   | |   d e f i n e d ( S T M 3 2 H 7 A 3 x x Q )   | |   d e f i n e d ( S T M 3 2 H 7 B 3 x x Q )   | |   d e f i n e d ( S T M 3 2 H 7 B 0 x x Q ) 
 # d e f i n e   H A L _ E n a b l e S R D o m a i n D B G S t o p M o d e             H A L _ E n a b l e D o m a i n 3 D B G S t o p M o d e 
 # d e f i n e   H A L _ D i s a b l e S R D o m a i n D B G S t o p M o d e           H A L _ D i s a b l e D o m a i n 3 D B G S t o p M o d e 
 # d e f i n e   H A L _ E n a b l e S R D o m a i n D B G S t a n d b y M o d e       H A L _ E n a b l e D o m a i n 3 D B G S t a n d b y M o d e 
 # d e f i n e   H A L _ D i s a b l e S R D o m a i n D B G S t a n d b y M o d e     H A L _ D i s a b l e D o m a i n 3 D B G S t a n d b y M o d e 
 # e n d i f   / *   S T M 3 2 H 7 A 3 x x   | |   S T M 3 2 H 7 B 3 x x   | |   S T M 3 2 H 7 B 0 x x   | |   S T M 3 2 H 7 A 3 x x Q   | |   S T M 3 2 H 7 B 3 x x Q     | |   S T M 3 2 H 7 B 0 x x Q   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ F L A S H _ A l i a s e d _ F u n c t i o n s   H A L   F L A S H   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   F L A S H _ H a l f P a g e P r o g r a m             H A L _ F L A S H E x _ H a l f P a g e P r o g r a m 
 # d e f i n e   F L A S H _ E n a b l e R u n P o w e r D o w n       H A L _ F L A S H E x _ E n a b l e R u n P o w e r D o w n 
 # d e f i n e   F L A S H _ D i s a b l e R u n P o w e r D o w n     H A L _ F L A S H E x _ D i s a b l e R u n P o w e r D o w n 
 # d e f i n e   H A L _ D A T A _ E E P R O M E x _ U n l o c k       H A L _ F L A S H E x _ D A T A E E P R O M _ U n l o c k 
 # d e f i n e   H A L _ D A T A _ E E P R O M E x _ L o c k           H A L _ F L A S H E x _ D A T A E E P R O M _ L o c k 
 # d e f i n e   H A L _ D A T A _ E E P R O M E x _ E r a s e         H A L _ F L A S H E x _ D A T A E E P R O M _ E r a s e 
 # d e f i n e   H A L _ D A T A _ E E P R O M E x _ P r o g r a m     H A L _ F L A S H E x _ D A T A E E P R O M _ P r o g r a m 
 
   / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I 2 C _ A l i a s e d _ F u n c t i o n s   H A L   I 2 C   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ I 2 C E x _ A n a l o g F i l t e r _ C o n f i g                   H A L _ I 2 C E x _ C o n f i g A n a l o g F i l t e r 
 # d e f i n e   H A L _ I 2 C E x _ D i g i t a l F i l t e r _ C o n f i g                 H A L _ I 2 C E x _ C o n f i g D i g i t a l F i l t e r 
 # d e f i n e   H A L _ F M P I 2 C E x _ A n a l o g F i l t e r _ C o n f i g             H A L _ F M P I 2 C E x _ C o n f i g A n a l o g F i l t e r 
 # d e f i n e   H A L _ F M P I 2 C E x _ D i g i t a l F i l t e r _ C o n f i g           H A L _ F M P I 2 C E x _ C o n f i g D i g i t a l F i l t e r 
 
 # d e f i n e   H A L _ I 2 C F a s t M o d e P l u s C o n f i g ( S Y S C F G _ I 2 C F a s t M o d e P l u s ,   c m d )   ( ( ( c m d ) = = E N A B L E ) ?   H A L _ I 2 C E x _ E n a b l e F a s t M o d e P l u s ( S Y S C F G _ I 2 C F a s t M o d e P l u s ) :   H A L _ I 2 C E x _ D i s a b l e F a s t M o d e P l u s ( S Y S C F G _ I 2 C F a s t M o d e P l u s ) ) 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 W B )   | |   d e f i n e d ( S T M 3 2 G 0 )   | |   d e f i n e d ( S T M 3 2 F 0 )   | |   d e f i n e d ( S T M 3 2 F 1 )   | |   d e f i n e d ( S T M 3 2 F 2 )   | |   d e f i n e d ( S T M 3 2 F 3 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 L 5 )   | |   d e f i n e d ( S T M 3 2 G 4 )   | |   d e f i n e d ( S T M 3 2 L 1 ) 
 # d e f i n e   H A L _ I 2 C _ M a s t e r _ S e q u e n t i a l _ T r a n s m i t _ I T     H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T 
 # d e f i n e   H A L _ I 2 C _ M a s t e r _ S e q u e n t i a l _ R e c e i v e _ I T       H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T 
 # d e f i n e   H A L _ I 2 C _ S l a v e _ S e q u e n t i a l _ T r a n s m i t _ I T       H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ I T 
 # d e f i n e   H A L _ I 2 C _ S l a v e _ S e q u e n t i a l _ R e c e i v e _ I T         H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ I T 
 # e n d i f   / *   S T M 3 2 H 7   | |   S T M 3 2 W B     | |   S T M 3 2 G 0   | |   S T M 3 2 F 0   | |   S T M 3 2 F 1   | |   S T M 3 2 F 2   | |   S T M 3 2 F 3   | |   S T M 3 2 F 4   | |   S T M 3 2 F 7   | |   S T M 3 2 L 0   | |   S T M 3 2 L 4   | |   S T M 3 2 L 5   | |   S T M 3 2 G 4   | |   S T M 3 2 L 1   * / 
 # i f   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 W B )   | |   d e f i n e d ( S T M 3 2 G 0 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 L 5 )   | |   d e f i n e d ( S T M 3 2 G 4 ) | |   d e f i n e d ( S T M 3 2 L 1 ) 
 # d e f i n e   H A L _ I 2 C _ M a s t e r _ S e q u e n t i a l _ T r a n s m i t _ D M A   H A L _ I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A 
 # d e f i n e   H A L _ I 2 C _ M a s t e r _ S e q u e n t i a l _ R e c e i v e _ D M A     H A L _ I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A 
 # d e f i n e   H A L _ I 2 C _ S l a v e _ S e q u e n t i a l _ T r a n s m i t _ D M A     H A L _ I 2 C _ S l a v e _ S e q _ T r a n s m i t _ D M A 
 # d e f i n e   H A L _ I 2 C _ S l a v e _ S e q u e n t i a l _ R e c e i v e _ D M A       H A L _ I 2 C _ S l a v e _ S e q _ R e c e i v e _ D M A 
 # e n d i f   / *   S T M 3 2 H 7   | |   S T M 3 2 W B     | |   S T M 3 2 G 0   | |   S T M 3 2 F 4   | |   S T M 3 2 F 7   | |   S T M 3 2 L 0   | |   S T M 3 2 L 4   | |   S T M 3 2 L 5   | |   S T M 3 2 G 4   | |   S T M 3 2 L 1   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 4 ) 
 # d e f i n e   H A L _ F M P I 2 C _ M a s t e r _ S e q u e n t i a l _ T r a n s m i t _ I T     H A L _ F M P I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ I T 
 # d e f i n e   H A L _ F M P I 2 C _ M a s t e r _ S e q u e n t i a l _ R e c e i v e _ I T       H A L _ F M P I 2 C _ M a s t e r _ S e q _ R e c e i v e _ I T 
 # d e f i n e   H A L _ F M P I 2 C _ S l a v e _ S e q u e n t i a l _ T r a n s m i t _ I T       H A L _ F M P I 2 C _ S l a v e _ S e q _ T r a n s m i t _ I T 
 # d e f i n e   H A L _ F M P I 2 C _ S l a v e _ S e q u e n t i a l _ R e c e i v e _ I T         H A L _ F M P I 2 C _ S l a v e _ S e q _ R e c e i v e _ I T 
 # d e f i n e   H A L _ F M P I 2 C _ M a s t e r _ S e q u e n t i a l _ T r a n s m i t _ D M A   H A L _ F M P I 2 C _ M a s t e r _ S e q _ T r a n s m i t _ D M A 
 # d e f i n e   H A L _ F M P I 2 C _ M a s t e r _ S e q u e n t i a l _ R e c e i v e _ D M A     H A L _ F M P I 2 C _ M a s t e r _ S e q _ R e c e i v e _ D M A 
 # d e f i n e   H A L _ F M P I 2 C _ S l a v e _ S e q u e n t i a l _ T r a n s m i t _ D M A     H A L _ F M P I 2 C _ S l a v e _ S e q _ T r a n s m i t _ D M A 
 # d e f i n e   H A L _ F M P I 2 C _ S l a v e _ S e q u e n t i a l _ R e c e i v e _ D M A       H A L _ F M P I 2 C _ S l a v e _ S e q _ R e c e i v e _ D M A 
 # e n d i f   / *   S T M 3 2 F 4   * / 
   / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ P W R _ A l i a s e d   H A L   P W R   A l i a s e d   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # i f   d e f i n e d ( S T M 3 2 G 0 ) 
 # d e f i n e   H A L _ P W R _ C o n f i g P V D                                                           H A L _ P W R E x _ C o n f i g P V D 
 # d e f i n e   H A L _ P W R _ E n a b l e P V D                                                           H A L _ P W R E x _ E n a b l e P V D 
 # d e f i n e   H A L _ P W R _ D i s a b l e P V D                                                         H A L _ P W R E x _ D i s a b l e P V D 
 # d e f i n e   H A L _ P W R _ P V D _ I R Q H a n d l e r                                                 H A L _ P W R E x _ P V D _ I R Q H a n d l e r 
 # e n d i f 
 # d e f i n e   H A L _ P W R _ P V D C o n f i g                                                           H A L _ P W R _ C o n f i g P V D 
 # d e f i n e   H A L _ P W R _ D i s a b l e B k U p R e g                                                 H A L _ P W R E x _ D i s a b l e B k U p R e g 
 # d e f i n e   H A L _ P W R _ D i s a b l e F l a s h P o w e r D o w n                                   H A L _ P W R E x _ D i s a b l e F l a s h P o w e r D o w n 
 # d e f i n e   H A L _ P W R _ D i s a b l e V d d i o 2 M o n i t o r                                     H A L _ P W R E x _ D i s a b l e V d d i o 2 M o n i t o r 
 # d e f i n e   H A L _ P W R _ E n a b l e B k U p R e g                                                   H A L _ P W R E x _ E n a b l e B k U p R e g 
 # d e f i n e   H A L _ P W R _ E n a b l e F l a s h P o w e r D o w n                                     H A L _ P W R E x _ E n a b l e F l a s h P o w e r D o w n 
 # d e f i n e   H A L _ P W R _ E n a b l e V d d i o 2 M o n i t o r                                       H A L _ P W R E x _ E n a b l e V d d i o 2 M o n i t o r 
 # d e f i n e   H A L _ P W R _ P V D _ P V M _ I R Q H a n d l e r                                         H A L _ P W R E x _ P V D _ P V M _ I R Q H a n d l e r 
 # d e f i n e   H A L _ P W R _ P V D L e v e l C o n f i g                                                 H A L _ P W R _ C o n f i g P V D 
 # d e f i n e   H A L _ P W R _ V d d i o 2 M o n i t o r _ I R Q H a n d l e r                             H A L _ P W R E x _ V d d i o 2 M o n i t o r _ I R Q H a n d l e r 
 # d e f i n e   H A L _ P W R _ V d d i o 2 M o n i t o r C a l l b a c k                                   H A L _ P W R E x _ V d d i o 2 M o n i t o r C a l l b a c k 
 # d e f i n e   H A L _ P W R E x _ A c t i v a t e O v e r D r i v e                                       H A L _ P W R E x _ E n a b l e O v e r D r i v e 
 # d e f i n e   H A L _ P W R E x _ D e a c t i v a t e O v e r D r i v e                                   H A L _ P W R E x _ D i s a b l e O v e r D r i v e 
 # d e f i n e   H A L _ P W R E x _ D i s a b l e S D A D C A n a l o g                                     H A L _ P W R E x _ D i s a b l e S D A D C 
 # d e f i n e   H A L _ P W R E x _ E n a b l e S D A D C A n a l o g                                       H A L _ P W R E x _ E n a b l e S D A D C 
 # d e f i n e   H A L _ P W R E x _ P V M C o n f i g                                                       H A L _ P W R E x _ C o n f i g P V M 
 
 # d e f i n e   P W R _ M O D E _ N O R M A L                                                               P W R _ P V D _ M O D E _ N O R M A L 
 # d e f i n e   P W R _ M O D E _ I T _ R I S I N G                                                         P W R _ P V D _ M O D E _ I T _ R I S I N G 
 # d e f i n e   P W R _ M O D E _ I T _ F A L L I N G                                                       P W R _ P V D _ M O D E _ I T _ F A L L I N G 
 # d e f i n e   P W R _ M O D E _ I T _ R I S I N G _ F A L L I N G                                         P W R _ P V D _ M O D E _ I T _ R I S I N G _ F A L L I N G 
 # d e f i n e   P W R _ M O D E _ E V E N T _ R I S I N G                                                   P W R _ P V D _ M O D E _ E V E N T _ R I S I N G 
 # d e f i n e   P W R _ M O D E _ E V E N T _ F A L L I N G                                                 P W R _ P V D _ M O D E _ E V E N T _ F A L L I N G 
 # d e f i n e   P W R _ M O D E _ E V E N T _ R I S I N G _ F A L L I N G                                   P W R _ P V D _ M O D E _ E V E N T _ R I S I N G _ F A L L I N G 
 
 # d e f i n e   C R _ O F F S E T _ B B                                                                     P W R _ C R _ O F F S E T _ B B 
 # d e f i n e   C S R _ O F F S E T _ B B                                                                   P W R _ C S R _ O F F S E T _ B B 
 # d e f i n e   P M O D E _ B I T _ N U M B E R                                                             V O S _ B I T _ N U M B E R 
 # d e f i n e   C R _ P M O D E _ B B                                                                       C R _ V O S _ B B 
 
 # d e f i n e   D B P _ B i t N u m b e r                                                                   D B P _ B I T _ N U M B E R 
 # d e f i n e   P V D E _ B i t N u m b e r                                                                 P V D E _ B I T _ N U M B E R 
 # d e f i n e   P M O D E _ B i t N u m b e r                                                               P M O D E _ B I T _ N U M B E R 
 # d e f i n e   E W U P _ B i t N u m b e r                                                                 E W U P _ B I T _ N U M B E R 
 # d e f i n e   F P D S _ B i t N u m b e r                                                                 F P D S _ B I T _ N U M B E R 
 # d e f i n e   O D E N _ B i t N u m b e r                                                                 O D E N _ B I T _ N U M B E R 
 # d e f i n e   O D S W E N _ B i t N u m b e r                                                             O D S W E N _ B I T _ N U M B E R 
 # d e f i n e   M R L V D S _ B i t N u m b e r                                                             M R L V D S _ B I T _ N U M B E R 
 # d e f i n e   L P L V D S _ B i t N u m b e r                                                             L P L V D S _ B I T _ N U M B E R 
 # d e f i n e   B R E _ B i t N u m b e r                                                                   B R E _ B I T _ N U M B E R 
 
 # d e f i n e   P W R _ M O D E _ E V T                                                                     P W R _ P V D _ M O D E _ N O R M A L 
 
   / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S M B U S _ A l i a s e d _ F u n c t i o n s   H A L   S M B U S   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ S M B U S _ S l a v e _ L i s t e n _ I T                     H A L _ S M B U S _ E n a b l e L i s t e n _ I T 
 # d e f i n e   H A L _ S M B U S _ S l a v e A d d r C a l l b a c k                 H A L _ S M B U S _ A d d r C a l l b a c k 
 # d e f i n e   H A L _ S M B U S _ S l a v e L i s t e n C p l t C a l l b a c k     H A L _ S M B U S _ L i s t e n C p l t C a l l b a c k 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S P I _ A l i a s e d _ F u n c t i o n s   H A L   S P I   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ S P I _ F l u s h R x F i f o                                 H A L _ S P I E x _ F l u s h R x F i f o 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ T I M _ A l i a s e d _ F u n c t i o n s   H A L   T I M   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ T I M _ D M A D e l a y P u l s e C p l t                                               T I M _ D M A D e l a y P u l s e C p l t 
 # d e f i n e   H A L _ T I M _ D M A E r r o r                                                                 T I M _ D M A E r r o r 
 # d e f i n e   H A L _ T I M _ D M A C a p t u r e C p l t                                                     T I M _ D M A C a p t u r e C p l t 
 # d e f i n e   H A L _ T I M E x _ D M A C o m m u t a t i o n C p l t                                         T I M E x _ D M A C o m m u t a t i o n C p l t 
 # i f   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 G 0 )   | |   d e f i n e d ( S T M 3 2 F 0 )   | |   d e f i n e d ( S T M 3 2 F 1 )   | |   d e f i n e d ( S T M 3 2 F 2 )   | |   d e f i n e d ( S T M 3 2 F 3 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 ) 
 # d e f i n e   H A L _ T I M _ S l a v e C o n f i g S y n c h r o n i z a t i o n                             H A L _ T I M _ S l a v e C o n f i g S y n c h r o 
 # d e f i n e   H A L _ T I M _ S l a v e C o n f i g S y n c h r o n i z a t i o n _ I T                       H A L _ T I M _ S l a v e C o n f i g S y n c h r o _ I T 
 # d e f i n e   H A L _ T I M E x _ C o m m u t a t i o n C a l l b a c k                                       H A L _ T I M E x _ C o m m u t C a l l b a c k 
 # d e f i n e   H A L _ T I M E x _ C o n f i g C o m m u t a t i o n E v e n t                                 H A L _ T I M E x _ C o n f i g C o m m u t E v e n t 
 # d e f i n e   H A L _ T I M E x _ C o n f i g C o m m u t a t i o n E v e n t _ I T                           H A L _ T I M E x _ C o n f i g C o m m u t E v e n t _ I T 
 # d e f i n e   H A L _ T I M E x _ C o n f i g C o m m u t a t i o n E v e n t _ D M A                         H A L _ T I M E x _ C o n f i g C o m m u t E v e n t _ D M A 
 # e n d i f   / *   S T M 3 2 H 7   | |   S T M 3 2 G 0   | |   S T M 3 2 F 0   | |   S T M 3 2 F 1   | |   S T M 3 2 F 2   | |   S T M 3 2 F 3   | |   S T M 3 2 F 4   | |   S T M 3 2 F 7   | |   S T M 3 2 L 0   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ U A R T _ A l i a s e d _ F u n c t i o n s   H A L   U A R T   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ U A R T _ W a k e u p C a l l b a c k   H A L _ U A R T E x _ W a k e u p C a l l b a c k 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ L T D C _ A l i a s e d _ F u n c t i o n s   H A L   L T D C   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ L T D C _ L i n e E v e n C a l l b a c k   H A L _ L T D C _ L i n e E v e n t C a l l b a c k 
 # d e f i n e   H A L _ L T D C _ R e l a o d                       H A L _ L T D C _ R e l o a d 
 # d e f i n e   H A L _ L T D C _ S t r u c t I n i t F r o m V i d e o C o n f i g     H A L _ L T D C E x _ S t r u c t I n i t F r o m V i d e o C o n f i g 
 # d e f i n e   H A L _ L T D C _ S t r u c t I n i t F r o m A d a p t e d C o m m a n d C o n f i g     H A L _ L T D C E x _ S t r u c t I n i t F r o m A d a p t e d C o m m a n d C o n f i g 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ P P P _ A l i a s e d _ F u n c t i o n s   H A L   P P P   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   H A L _ A E S _ A l i a s e d _ M a c r o s   H A L   C R Y P   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   A E S _ I T _ C C                                             C R Y P _ I T _ C C 
 # d e f i n e   A E S _ I T _ E R R                                           C R Y P _ I T _ E R R 
 # d e f i n e   A E S _ F L A G _ C C F                                       C R Y P _ F L A G _ C C F 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ A l i a s e d _ M a c r o s   H A L   G e n e r i c   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ G E T _ B O O T _ M O D E                                       _ _ H A L _ S Y S C F G _ G E T _ B O O T _ M O D E 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ F L A S H                               _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ F L A S H 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ S Y S T E M F L A S H                   _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ S Y S T E M F L A S H 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ S R A M                                 _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ S R A M 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ F M C                                   _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ F M C 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ F M C _ S D R A M                       _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ F M C _ S D R A M 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ F S M C                                 _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ F S M C 
 # d e f i n e   _ _ H A L _ R E M A P M E M O R Y _ Q U A D S P I                           _ _ H A L _ S Y S C F G _ R E M A P M E M O R Y _ Q U A D S P I 
 # d e f i n e   _ _ H A L _ F M C _ B A N K                                                 _ _ H A L _ S Y S C F G _ F M C _ B A N K 
 # d e f i n e   _ _ H A L _ G E T _ F L A G                                                 _ _ H A L _ S Y S C F G _ G E T _ F L A G 
 # d e f i n e   _ _ H A L _ C L E A R _ F L A G                                             _ _ H A L _ S Y S C F G _ C L E A R _ F L A G 
 # d e f i n e   _ _ H A L _ V R E F I N T _ O U T _ E N A B L E                             _ _ H A L _ S Y S C F G _ V R E F I N T _ O U T _ E N A B L E 
 # d e f i n e   _ _ H A L _ V R E F I N T _ O U T _ D I S A B L E                           _ _ H A L _ S Y S C F G _ V R E F I N T _ O U T _ D I S A B L E 
 # d e f i n e   _ _ H A L _ S Y S C F G _ S R A M 2 _ W R P _ E N A B L E                   _ _ H A L _ S Y S C F G _ S R A M 2 _ W R P _ 0 _ 3 1 _ E N A B L E 
 
 # d e f i n e   S Y S C F G _ F L A G _ V R E F _ R E A D Y                                 S Y S C F G _ F L A G _ V R E F I N T _ R E A D Y 
 # d e f i n e   S Y S C F G _ F L A G _ R C 4 8                                             R C C _ F L A G _ H S I 4 8 
 # d e f i n e   I S _ S Y S C F G _ F A S T M O D E P L U S _ C O N F I G                   I S _ I 2 C _ F A S T M O D E P L U S 
 # d e f i n e   U F B _ M O D E _ B i t N u m b e r                                         U F B _ M O D E _ B I T _ N U M B E R 
 # d e f i n e   C M P _ P D _ B i t N u m b e r                                             C M P _ P D _ B I T _ N U M B E R 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ A D C _ A l i a s e d _ M a c r o s   H A L   A D C   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ A D C _ E N A B L E                                                                           _ _ H A L _ A D C _ E N A B L E 
 # d e f i n e   _ _ A D C _ D I S A B L E                                                                         _ _ H A L _ A D C _ D I S A B L E 
 # d e f i n e   _ _ H A L _ A D C _ E N A B L I N G _ C O N D I T I O N S                                         A D C _ E N A B L I N G _ C O N D I T I O N S 
 # d e f i n e   _ _ H A L _ A D C _ D I S A B L I N G _ C O N D I T I O N S                                       A D C _ D I S A B L I N G _ C O N D I T I O N S 
 # d e f i n e   _ _ H A L _ A D C _ I S _ E N A B L E D                                                           A D C _ I S _ E N A B L E 
 # d e f i n e   _ _ A D C _ I S _ E N A B L E D                                                                   A D C _ I S _ E N A B L E 
 # d e f i n e   _ _ H A L _ A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R                             A D C _ I S _ S O F T W A R E _ S T A R T _ R E G U L A R 
 # d e f i n e   _ _ H A L _ A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D                           A D C _ I S _ S O F T W A R E _ S T A R T _ I N J E C T E D 
 # d e f i n e   _ _ H A L _ A D C _ I S _ C O N V E R S I O N _ O N G O I N G _ R E G U L A R _ I N J E C T E D   A D C _ I S _ C O N V E R S I O N _ O N G O I N G _ R E G U L A R _ I N J E C T E D 
 # d e f i n e   _ _ H A L _ A D C _ I S _ C O N V E R S I O N _ O N G O I N G _ R E G U L A R                     A D C _ I S _ C O N V E R S I O N _ O N G O I N G _ R E G U L A R 
 # d e f i n e   _ _ H A L _ A D C _ I S _ C O N V E R S I O N _ O N G O I N G _ I N J E C T E D                   A D C _ I S _ C O N V E R S I O N _ O N G O I N G _ I N J E C T E D 
 # d e f i n e   _ _ H A L _ A D C _ I S _ C O N V E R S I O N _ O N G O I N G                                     A D C _ I S _ C O N V E R S I O N _ O N G O I N G 
 # d e f i n e   _ _ H A L _ A D C _ C L E A R _ E R R O R C O D E                                                 A D C _ C L E A R _ E R R O R C O D E 
 
 # d e f i n e   _ _ H A L _ A D C _ G E T _ R E S O L U T I O N                                                   A D C _ G E T _ R E S O L U T I O N 
 # d e f i n e   _ _ H A L _ A D C _ J S Q R _ R K                                                                 A D C _ J S Q R _ R K 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ A W D 1 C H                                                         A D C _ C F G R _ A W D 1 C H _ S H I F T 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ A W D 2 3 C R                                                       A D C _ C F G R _ A W D 2 3 C R 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ I N J E C T _ A U T O _ C O N V E R S I O N                         A D C _ C F G R _ I N J E C T _ A U T O _ C O N V E R S I O N 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ I N J E C T _ C O N T E X T _ Q U E U E                             A D C _ C F G R _ I N J E C T _ C O N T E X T _ Q U E U E 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ I N J E C T _ D I S C C O N T I N U O U S                           A D C _ C F G R _ I N J E C T _ D I S C C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ R E G _ D I S C C O N T I N U O U S                                 A D C _ C F G R _ R E G _ D I S C C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ D I S C O N T I N U O U S _ N U M                                   A D C _ C F G R _ D I S C O N T I N U O U S _ N U M 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ A U T O W A I T                                                     A D C _ C F G R _ A U T O W A I T 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ C O N T I N U O U S                                                 A D C _ C F G R _ C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ O V E R R U N                                                       A D C _ C F G R _ O V E R R U N 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ D M A C O N T R E Q                                                 A D C _ C F G R _ D M A C O N T R E Q 
 # d e f i n e   _ _ H A L _ A D C _ C F G R _ E X T S E L                                                         A D C _ C F G R _ E X T S E L _ S E T 
 # d e f i n e   _ _ H A L _ A D C _ J S Q R _ J E X T S E L                                                       A D C _ J S Q R _ J E X T S E L _ S E T 
 # d e f i n e   _ _ H A L _ A D C _ O F R _ C H A N N E L                                                         A D C _ O F R _ C H A N N E L 
 # d e f i n e   _ _ H A L _ A D C _ D I F S E L _ C H A N N E L                                                   A D C _ D I F S E L _ C H A N N E L 
 # d e f i n e   _ _ H A L _ A D C _ C A L F A C T _ D I F F _ S E T                                               A D C _ C A L F A C T _ D I F F _ S E T 
 # d e f i n e   _ _ H A L _ A D C _ C A L F A C T _ D I F F _ G E T                                               A D C _ C A L F A C T _ D I F F _ G E T 
 # d e f i n e   _ _ H A L _ A D C _ T R X _ H I G H T H R E S H O L D                                             A D C _ T R X _ H I G H T H R E S H O L D 
 
 # d e f i n e   _ _ H A L _ A D C _ O F F S E T _ S H I F T _ R E S O L U T I O N                                 A D C _ O F F S E T _ S H I F T _ R E S O L U T I O N 
 # d e f i n e   _ _ H A L _ A D C _ A W D 1 T H R E S H O L D _ S H I F T _ R E S O L U T I O N                   A D C _ A W D 1 T H R E S H O L D _ S H I F T _ R E S O L U T I O N 
 # d e f i n e   _ _ H A L _ A D C _ A W D 2 3 T H R E S H O L D _ S H I F T _ R E S O L U T I O N                 A D C _ A W D 2 3 T H R E S H O L D _ S H I F T _ R E S O L U T I O N 
 # d e f i n e   _ _ H A L _ A D C _ C O M M O N _ R E G I S T E R                                                 A D C _ C O M M O N _ R E G I S T E R 
 # d e f i n e   _ _ H A L _ A D C _ C O M M O N _ C C R _ M U L T I                                               A D C _ C O M M O N _ C C R _ M U L T I 
 # d e f i n e   _ _ H A L _ A D C _ M U L T I M O D E _ I S _ E N A B L E D                                       A D C _ M U L T I M O D E _ I S _ E N A B L E 
 # d e f i n e   _ _ A D C _ M U L T I M O D E _ I S _ E N A B L E D                                               A D C _ M U L T I M O D E _ I S _ E N A B L E 
 # d e f i n e   _ _ H A L _ A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R                 A D C _ N O N M U L T I M O D E _ O R _ M U L T I M O D E M A S T E R 
 # d e f i n e   _ _ H A L _ A D C _ C O M M O N _ A D C _ O T H E R                                               A D C _ C O M M O N _ A D C _ O T H E R 
 # d e f i n e   _ _ H A L _ A D C _ M U L T I _ S L A V E                                                         A D C _ M U L T I _ S L A V E 
 
 # d e f i n e   _ _ H A L _ A D C _ S Q R 1 _ L                                                                   A D C _ S Q R 1 _ L _ S H I F T 
 # d e f i n e   _ _ H A L _ A D C _ J S Q R _ J L                                                                 A D C _ J S Q R _ J L _ S H I F T 
 # d e f i n e   _ _ H A L _ A D C _ J S Q R _ R K _ J L                                                           A D C _ J S Q R _ R K _ J L 
 # d e f i n e   _ _ H A L _ A D C _ C R 1 _ D I S C O N T I N U O U S _ N U M                                     A D C _ C R 1 _ D I S C O N T I N U O U S _ N U M 
 # d e f i n e   _ _ H A L _ A D C _ C R 1 _ S C A N                                                               A D C _ C R 1 _ S C A N _ S E T 
 # d e f i n e   _ _ H A L _ A D C _ C O N V C Y C L E S _ M A X _ R A N G E                                       A D C _ C O N V C Y C L E S _ M A X _ R A N G E 
 # d e f i n e   _ _ H A L _ A D C _ C L O C K _ P R E S C A L E R _ R A N G E                                     A D C _ C L O C K _ P R E S C A L E R _ R A N G E 
 # d e f i n e   _ _ H A L _ A D C _ G E T _ C L O C K _ P R E S C A L E R                                         A D C _ G E T _ C L O C K _ P R E S C A L E R 
 
 # d e f i n e   _ _ H A L _ A D C _ S Q R 1                                                                       A D C _ S Q R 1 
 # d e f i n e   _ _ H A L _ A D C _ S M P R 1                                                                     A D C _ S M P R 1 
 # d e f i n e   _ _ H A L _ A D C _ S M P R 2                                                                     A D C _ S M P R 2 
 # d e f i n e   _ _ H A L _ A D C _ S Q R 3 _ R K                                                                 A D C _ S Q R 3 _ R K 
 # d e f i n e   _ _ H A L _ A D C _ S Q R 2 _ R K                                                                 A D C _ S Q R 2 _ R K 
 # d e f i n e   _ _ H A L _ A D C _ S Q R 1 _ R K                                                                 A D C _ S Q R 1 _ R K 
 # d e f i n e   _ _ H A L _ A D C _ C R 2 _ C O N T I N U O U S                                                   A D C _ C R 2 _ C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C R 1 _ D I S C O N T I N U O U S                                             A D C _ C R 1 _ D I S C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C R 1 _ S C A N C O N V                                                       A D C _ C R 1 _ S C A N C O N V 
 # d e f i n e   _ _ H A L _ A D C _ C R 2 _ E O C S e l e c t i o n                                               A D C _ C R 2 _ E O C S e l e c t i o n 
 # d e f i n e   _ _ H A L _ A D C _ C R 2 _ D M A C o n t R e q                                                   A D C _ C R 2 _ D M A C o n t R e q 
 # d e f i n e   _ _ H A L _ A D C _ J S Q R                                                                       A D C _ J S Q R 
 
 # d e f i n e   _ _ H A L _ A D C _ C H S E L R _ C H A N N E L                                                   A D C _ C H S E L R _ C H A N N E L 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ R E G _ D I S C C O N T I N U O U S                               A D C _ C F G R 1 _ R E G _ D I S C C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ A U T O O F F                                                     A D C _ C F G R 1 _ A U T O O F F 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ A U T O W A I T                                                   A D C _ C F G R 1 _ A U T O W A I T 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ C O N T I N U O U S                                               A D C _ C F G R 1 _ C O N T I N U O U S 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ O V E R R U N                                                     A D C _ C F G R 1 _ O V E R R U N 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ S C A N D I R                                                     A D C _ C F G R 1 _ S C A N D I R 
 # d e f i n e   _ _ H A L _ A D C _ C F G R 1 _ D M A C O N T R E Q                                               A D C _ C F G R 1 _ D M A C O N T R E Q 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ D A C _ A l i a s e d _ M a c r o s   H A L   D A C   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ D H R 1 2 R 1 _ A L I G N E M E N T                                                 D A C _ D H R 1 2 R 1 _ A L I G N M E N T 
 # d e f i n e   _ _ H A L _ D H R 1 2 R 2 _ A L I G N E M E N T                                                 D A C _ D H R 1 2 R 2 _ A L I G N M E N T 
 # d e f i n e   _ _ H A L _ D H R 1 2 R D _ A L I G N E M E N T                                                 D A C _ D H R 1 2 R D _ A L I G N M E N T 
 # d e f i n e   I S _ D A C _ G E N E R A T E _ W A V E                                                         I S _ D A C _ W A V E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ D B G M C U _ A l i a s e d _ M a c r o s   H A L   D B G M C U   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 2 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 2 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 2 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 2 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 3 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 3 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 3 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 3 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 4 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 4 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 4 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 4 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 5 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 5 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 5 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 5 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 6 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 6 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 6 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 6 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 7 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 7 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 7 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 7 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 8 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 8 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 8 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 8 
 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 9 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 9 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 9 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 9 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 0 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 0 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 0 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 0 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 1 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 1 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 1 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 1 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 2 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 2 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 2 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 2 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 3 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 3 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 3 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 3 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 4 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 4 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 4 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 4 
 # d e f i n e   _ _ H A L _ F R E E Z E _ C A N 2 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ C A N 2 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ C A N 2 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ C A N 2 
 
 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 5 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 5 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 5 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 5 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 6 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 6 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 6 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 6 
 # d e f i n e   _ _ H A L _ F R E E Z E _ T I M 1 7 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ T I M 1 7 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ T I M 1 7 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ T I M 1 7 
 # d e f i n e   _ _ H A L _ F R E E Z E _ R T C _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ R T C 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ R T C _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ R T C 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
     # d e f i n e   _ _ H A L _ F R E E Z E _ W W D G _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ W W D G 1 
     # d e f i n e   _ _ H A L _ U N F R E E Z E _ W W D G _ D B G M C U   _ _ H A L _ D B G M C U _ U n F r e e z e _ W W D G 1 
     # d e f i n e   _ _ H A L _ F R E E Z E _ I W D G _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ I W D G 1 
     # d e f i n e   _ _ H A L _ U N F R E E Z E _ I W D G _ D B G M C U   _ _ H A L _ D B G M C U _ U n F r e e z e _ I W D G 1 
 # e l s e 
     # d e f i n e   _ _ H A L _ F R E E Z E _ W W D G _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ W W D G 
     # d e f i n e   _ _ H A L _ U N F R E E Z E _ W W D G _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ W W D G 
     # d e f i n e   _ _ H A L _ F R E E Z E _ I W D G _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ I W D G 
     # d e f i n e   _ _ H A L _ U N F R E E Z E _ I W D G _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I W D G 
 # e n d i f   / *   S T M 3 2 H 7   * / 
 # d e f i n e   _ _ H A L _ F R E E Z E _ I 2 C 1 _ T I M E O U T _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ I 2 C 1 _ T I M E O U T 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ I 2 C 1 _ T I M E O U T _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I 2 C 1 _ T I M E O U T 
 # d e f i n e   _ _ H A L _ F R E E Z E _ I 2 C 2 _ T I M E O U T _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ I 2 C 2 _ T I M E O U T 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ I 2 C 2 _ T I M E O U T _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I 2 C 2 _ T I M E O U T 
 # d e f i n e   _ _ H A L _ F R E E Z E _ I 2 C 3 _ T I M E O U T _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ I 2 C 3 _ T I M E O U T 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ I 2 C 3 _ T I M E O U T _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ I 2 C 3 _ T I M E O U T 
 # d e f i n e   _ _ H A L _ F R E E Z E _ C A N 1 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ C A N 1 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ C A N 1 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ C A N 1 
 # d e f i n e   _ _ H A L _ F R E E Z E _ L P T I M 1 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ L P T I M 1 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ L P T I M 1 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ L P T I M 1 
 # d e f i n e   _ _ H A L _ F R E E Z E _ L P T I M 2 _ D B G M C U   _ _ H A L _ D B G M C U _ F R E E Z E _ L P T I M 2 
 # d e f i n e   _ _ H A L _ U N F R E E Z E _ L P T I M 2 _ D B G M C U   _ _ H A L _ D B G M C U _ U N F R E E Z E _ L P T I M 2 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ C O M P _ A l i a s e d _ M a c r o s   H A L   C O M P   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # i f   d e f i n e d ( S T M 3 2 F 3 ) 
 # d e f i n e   C O M P _ S T A R T                                                                               _ _ H A L _ C O M P _ E N A B L E 
 # d e f i n e   C O M P _ S T O P                                                                                 _ _ H A L _ C O M P _ D I S A B L E 
 # d e f i n e   C O M P _ L O C K                                                                                 _ _ H A L _ C O M P _ L O C K 
 
 # i f   d e f i n e d ( S T M 3 2 F 3 0 1 x 8 )   | |   d e f i n e d ( S T M 3 2 F 3 0 2 x 8 )   | |   d e f i n e d ( S T M 3 2 F 3 1 8 x x )   | |   d e f i n e d ( S T M 3 2 F 3 0 3 x 8 )   | |   d e f i n e d ( S T M 3 2 F 3 3 4 x 8 )   | |   d e f i n e d ( S T M 3 2 F 3 2 8 x x ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )       ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ E N A B L E _ I T ( _ _ E X T I L I N E _ _ )                     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ D I S A B L E _ I T ( _ _ E X T I L I N E _ _ )                   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ G E T _ F L A G ( _ _ F L A G _ _ )                               ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ G E T _ F L A G ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ C L E A R _ F L A G ( _ _ F L A G _ _ )                           ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ C L E A R _ F L A G ( ) ) 
 #   e n d i f 
 #   i f   d e f i n e d ( S T M 3 2 F 3 0 2 x E )   | |   d e f i n e d ( S T M 3 2 F 3 0 2 x C ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )       ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ E N A B L E _ I T ( _ _ E X T I L I N E _ _ )                     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ D I S A B L E _ I T ( _ _ E X T I L I N E _ _ )                   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ G E T _ F L A G ( _ _ F L A G _ _ )                               ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ G E T _ F L A G ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ C L E A R _ F L A G ( _ _ F L A G _ _ )                           ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ C L E A R _ F L A G ( ) ) 
 #   e n d i f 
 #   i f   d e f i n e d ( S T M 3 2 F 3 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 3 9 8 x x )   | |   d e f i n e d ( S T M 3 2 F 3 0 3 x C )   | |   d e f i n e d ( S T M 3 2 F 3 5 8 x x ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )       ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ E N A B L E _ I T ( _ _ E X T I L I N E _ _ )                     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ E N A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ D I S A B L E _ I T ( _ _ E X T I L I N E _ _ )                   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ D I S A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ G E T _ F L A G ( _ _ F L A G _ _ )                               ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ G E T _ F L A G ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ C L E A R _ F L A G ( _ _ F L A G _ _ )                           ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 2 )   ?   _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 3 )   ?   _ _ H A L _ C O M P _ C O M P 3 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 4 )   ?   _ _ H A L _ C O M P _ C O M P 4 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 5 )   ?   _ _ H A L _ C O M P _ C O M P 5 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 6 )   ?   _ _ H A L _ C O M P _ C O M P 6 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 7 _ E X T I _ C L E A R _ F L A G ( ) ) 
 #   e n d i f 
 #   i f   d e f i n e d ( S T M 3 2 F 3 7 3 x C )   | | d e f i n e d ( S T M 3 2 F 3 7 8 x x ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )       ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ E N A B L E _ I T ( _ _ E X T I L I N E _ _ )                     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ D I S A B L E _ I T ( _ _ E X T I L I N E _ _ )                   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ G E T _ F L A G ( _ _ F L A G _ _ )                               ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ G E T _ F L A G ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ C L E A R _ F L A G ( _ _ F L A G _ _ )                           ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ C L E A R _ F L A G ( ) ) 
 #   e n d i f 
 # e l s e 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )       ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ R I S I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ E N A B L E ( _ _ E X T I L I N E _ _ )     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ F A L L I N G _ I T _ D I S A B L E ( _ _ E X T I L I N E _ _ )   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ E N A B L E _ I T ( _ _ E X T I L I N E _ _ )                     ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ E N A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ D I S A B L E _ I T ( _ _ E X T I L I N E _ _ )                   ( ( ( _ _ E X T I L I N E _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ D I S A B L E _ I T ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ G E T _ F L A G ( _ _ F L A G _ _ )                               ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ G E T _ F L A G ( ) ) 
 # d e f i n e   _ _ H A L _ C O M P _ E X T I _ C L E A R _ F L A G ( _ _ F L A G _ _ )                           ( ( ( _ _ F L A G _ _ )     = =   C O M P _ E X T I _ L I N E _ C O M P 1 )   ?   _ _ H A L _ C O M P _ C O M P 1 _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                                     _ _ H A L _ C O M P _ C O M P 2 _ E X T I _ C L E A R _ F L A G ( ) ) 
 # e n d i f 
 
 # d e f i n e   _ _ H A L _ C O M P _ G E T _ E X T I _ L I N E     C O M P _ G E T _ E X T I _ L I N E 
 
 # i f   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 ) 
 / *   N o t e :   O n   t h e s e   S T M 3 2   f a m i l i e s ,   t h e   o n l y   a r g u m e n t   o f   t h i s   m a c r o                           * / 
 / *               i s   C O M P _ F L A G _ L O C K .                                                                                                       * / 
 / *               T h i s   m a c r o   i s   r e p l a c e d   b y   _ _ H A L _ C O M P _ I S _ L O C K E D   w i t h   o n l y   H A L   h a n d l e     * / 
 / *               a r g u m e n t .                                                                                                                         * / 
 # d e f i n e   _ _ H A L _ C O M P _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )     ( _ _ H A L _ C O M P _ I S _ L O C K E D ( _ _ H A N D L E _ _ ) ) 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 # i f   d e f i n e d ( S T M 3 2 L 0 )   | |   d e f i n e d ( S T M 3 2 L 4 ) 
 / * *   @ d e f g r o u p   H A L _ C O M P _ A l i a s e d _ F u n c t i o n s   H A L   C O M P   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   H A L _ C O M P _ S t a r t _ I T               H A L _ C O M P _ S t a r t   / *   F u n c t i o n   c o n s i d e r e d   a s   l e g a c y   a s   E X T I   e v e n t   o r   I T   c o n f i g u r a t i o n   i s   d o n e   i n t o   H A L _ C O M P _ I n i t ( )   * / 
 # d e f i n e   H A L _ C O M P _ S t o p _ I T                 H A L _ C O M P _ S t o p     / *   F u n c t i o n   c o n s i d e r e d   a s   l e g a c y   a s   E X T I   e v e n t   o r   I T   c o n f i g u r a t i o n   i s   d o n e   i n t o   H A L _ C O M P _ I n i t ( )   * / 
 / * * 
     *   @ } 
     * / 
 # e n d i f 
 
 / * *   @ d e f g r o u p   H A L _ D A C _ A l i a s e d _ M a c r o s   H A L   D A C   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   I S _ D A C _ W A V E ( W A V E )   ( ( ( W A V E )   = =   D A C _ W A V E _ N O N E )   | |   \ 
                                                     ( ( W A V E )   = =   D A C _ W A V E _ N O I S E ) | |   \ 
                                                     ( ( W A V E )   = =   D A C _ W A V E _ T R I A N G L E ) ) 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ F L A S H _ A l i a s e d _ M a c r o s   H A L   F L A S H   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   I S _ W R P A R E A                     I S _ O B _ W R P A R E A 
 # d e f i n e   I S _ T Y P E P R O G R A M             I S _ F L A S H _ T Y P E P R O G R A M 
 # d e f i n e   I S _ T Y P E P R O G R A M F L A S H   I S _ F L A S H _ T Y P E P R O G R A M 
 # d e f i n e   I S _ T Y P E E R A S E                 I S _ F L A S H _ T Y P E E R A S E 
 # d e f i n e   I S _ N B S E C T O R S                 I S _ F L A S H _ N B S E C T O R S 
 # d e f i n e   I S _ O B _ W D G _ S O U R C E         I S _ O B _ I W D G _ S O U R C E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I 2 C _ A l i a s e d _ M a c r o s   H A L   I 2 C   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ H A L _ I 2 C _ R E S E T _ C R 2                           I 2 C _ R E S E T _ C R 2 
 # d e f i n e   _ _ H A L _ I 2 C _ G E N E R A T E _ S T A R T                 I 2 C _ G E N E R A T E _ S T A R T 
 # i f   d e f i n e d ( S T M 3 2 F 1 ) 
 # d e f i n e   _ _ H A L _ I 2 C _ F R E Q _ R A N G E                         I 2 C _ F R E Q R A N G E 
 # e l s e 
 # d e f i n e   _ _ H A L _ I 2 C _ F R E Q _ R A N G E                         I 2 C _ F R E Q _ R A N G E 
 # e n d i f   / *   S T M 3 2 F 1   * / 
 # d e f i n e   _ _ H A L _ I 2 C _ R I S E _ T I M E                           I 2 C _ R I S E _ T I M E 
 # d e f i n e   _ _ H A L _ I 2 C _ S P E E D _ S T A N D A R D                 I 2 C _ S P E E D _ S T A N D A R D 
 # d e f i n e   _ _ H A L _ I 2 C _ S P E E D _ F A S T                         I 2 C _ S P E E D _ F A S T 
 # d e f i n e   _ _ H A L _ I 2 C _ S P E E D                                   I 2 C _ S P E E D 
 # d e f i n e   _ _ H A L _ I 2 C _ 7 B I T _ A D D _ W R I T E                 I 2 C _ 7 B I T _ A D D _ W R I T E 
 # d e f i n e   _ _ H A L _ I 2 C _ 7 B I T _ A D D _ R E A D                   I 2 C _ 7 B I T _ A D D _ R E A D 
 # d e f i n e   _ _ H A L _ I 2 C _ 1 0 B I T _ A D D R E S S                   I 2 C _ 1 0 B I T _ A D D R E S S 
 # d e f i n e   _ _ H A L _ I 2 C _ 1 0 B I T _ H E A D E R _ W R I T E         I 2 C _ 1 0 B I T _ H E A D E R _ W R I T E 
 # d e f i n e   _ _ H A L _ I 2 C _ 1 0 B I T _ H E A D E R _ R E A D           I 2 C _ 1 0 B I T _ H E A D E R _ R E A D 
 # d e f i n e   _ _ H A L _ I 2 C _ M E M _ A D D _ M S B                       I 2 C _ M E M _ A D D _ M S B 
 # d e f i n e   _ _ H A L _ I 2 C _ M E M _ A D D _ L S B                       I 2 C _ M E M _ A D D _ L S B 
 # d e f i n e   _ _ H A L _ I 2 C _ F R E Q R A N G E                           I 2 C _ F R E Q R A N G E 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I 2 S _ A l i a s e d _ M a c r o s   H A L   I 2 S   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   I S _ I 2 S _ I N S T A N C E                                   I S _ I 2 S _ A L L _ I N S T A N C E 
 # d e f i n e   I S _ I 2 S _ I N S T A N C E _ E X T                           I S _ I 2 S _ A L L _ I N S T A N C E _ E X T 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
     # d e f i n e   _ _ H A L _ I 2 S _ C L E A R _ F R E F L A G               _ _ H A L _ I 2 S _ C L E A R _ T I F R E F L A G 
 # e n d i f 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ I R D A _ A l i a s e d _ M a c r o s   H A L   I R D A   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ I R D A _ D I S A B L E                                     _ _ H A L _ I R D A _ D I S A B L E 
 # d e f i n e   _ _ I R D A _ E N A B L E                                       _ _ H A L _ I R D A _ E N A B L E 
 
 # d e f i n e   _ _ H A L _ I R D A _ G E T C L O C K S O U R C E               I R D A _ G E T C L O C K S O U R C E 
 # d e f i n e   _ _ H A L _ I R D A _ M A S K _ C O M P U T A T I O N           I R D A _ M A S K _ C O M P U T A T I O N 
 # d e f i n e   _ _ I R D A _ G E T C L O C K S O U R C E                       I R D A _ G E T C L O C K S O U R C E 
 # d e f i n e   _ _ I R D A _ M A S K _ C O M P U T A T I O N                   I R D A _ M A S K _ C O M P U T A T I O N 
 
 # d e f i n e   I S _ I R D A _ O N E B I T _ S A M P L E                       I S _ I R D A _ O N E _ B I T _ S A M P L E 
 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ I W D G _ A l i a s e d _ M a c r o s   H A L   I W D G   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ I W D G _ E N A B L E _ W R I T E _ A C C E S S     I W D G _ E N A B L E _ W R I T E _ A C C E S S 
 # d e f i n e   _ _ H A L _ I W D G _ D I S A B L E _ W R I T E _ A C C E S S   I W D G _ D I S A B L E _ W R I T E _ A C C E S S 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ L P T I M _ A l i a s e d _ M a c r o s   H A L   L P T I M   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ H A L _ L P T I M _ E N A B L E _ I N T E R R U P T         _ _ H A L _ L P T I M _ E N A B L E _ I T 
 # d e f i n e   _ _ H A L _ L P T I M _ D I S A B L E _ I N T E R R U P T       _ _ H A L _ L P T I M _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ L P T I M _ G E T _ I T S T A T U S                 _ _ H A L _ L P T I M _ G E T _ I T _ S O U R C E 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ O P A M P _ A l i a s e d _ M a c r o s   H A L   O P A M P   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ O P A M P _ C S R _ O P A X P D                                 O P A M P _ C S R _ O P A X P D 
 # d e f i n e   _ _ O P A M P _ C S R _ S 3 S E L X                                 O P A M P _ C S R _ S 3 S E L X 
 # d e f i n e   _ _ O P A M P _ C S R _ S 4 S E L X                                 O P A M P _ C S R _ S 4 S E L X 
 # d e f i n e   _ _ O P A M P _ C S R _ S 5 S E L X                                 O P A M P _ C S R _ S 5 S E L X 
 # d e f i n e   _ _ O P A M P _ C S R _ S 6 S E L X                                 O P A M P _ C S R _ S 6 S E L X 
 # d e f i n e   _ _ O P A M P _ C S R _ O P A X C A L _ L                           O P A M P _ C S R _ O P A X C A L _ L 
 # d e f i n e   _ _ O P A M P _ C S R _ O P A X C A L _ H                           O P A M P _ C S R _ O P A X C A L _ H 
 # d e f i n e   _ _ O P A M P _ C S R _ O P A X L P M                               O P A M P _ C S R _ O P A X L P M 
 # d e f i n e   _ _ O P A M P _ C S R _ A L L _ S W I T C H E S                     O P A M P _ C S R _ A L L _ S W I T C H E S 
 # d e f i n e   _ _ O P A M P _ C S R _ A N A W S E L X                             O P A M P _ C S R _ A N A W S E L X 
 # d e f i n e   _ _ O P A M P _ C S R _ O P A X C A L O U T                         O P A M P _ C S R _ O P A X C A L O U T 
 # d e f i n e   _ _ O P A M P _ O F F S E T _ T R I M _ B I T S P O S I T I O N     O P A M P _ O F F S E T _ T R I M _ B I T S P O S I T I O N 
 # d e f i n e   _ _ O P A M P _ O F F S E T _ T R I M _ S E T                       O P A M P _ O F F S E T _ T R I M _ S E T 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ P W R _ A l i a s e d _ M a c r o s   H A L   P W R   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ P V D _ E V E N T _ D I S A B L E                                                                     _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ E V E N T 
 # d e f i n e   _ _ H A L _ P V D _ E V E N T _ E N A B L E                                                                       _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ E V E N T 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ F A L L I N G T R I G G E R _ D I S A B L E                                         _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ F A L L I N G T R I G G E R _ E N A B L E                                           _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ R I S I N G T R I G G E R _ D I S A B L E                                           _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ R I S I N G T R I G G E R _ E N A B L E                                             _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P V M _ E V E N T _ D I S A B L E                                                                     _ _ H A L _ P W R _ P V M _ E V E N T _ D I S A B L E 
 # d e f i n e   _ _ H A L _ P V M _ E V E N T _ E N A B L E                                                                       _ _ H A L _ P W R _ P V M _ E V E N T _ E N A B L E 
 # d e f i n e   _ _ H A L _ P V M _ E X T I _ F A L L I N G T R I G G E R _ D I S A B L E                                         _ _ H A L _ P W R _ P V M _ E X T I _ F A L L I N G T R I G G E R _ D I S A B L E 
 # d e f i n e   _ _ H A L _ P V M _ E X T I _ F A L L I N G T R I G G E R _ E N A B L E                                           _ _ H A L _ P W R _ P V M _ E X T I _ F A L L I N G T R I G G E R _ E N A B L E 
 # d e f i n e   _ _ H A L _ P V M _ E X T I _ R I S I N G T R I G G E R _ D I S A B L E                                           _ _ H A L _ P W R _ P V M _ E X T I _ R I S I N G T R I G G E R _ D I S A B L E 
 # d e f i n e   _ _ H A L _ P V M _ E X T I _ R I S I N G T R I G G E R _ E N A B L E                                             _ _ H A L _ P W R _ P V M _ E X T I _ R I S I N G T R I G G E R _ E N A B L E 
 # d e f i n e   _ _ H A L _ P W R _ I N T E R N A L W A K E U P _ D I S A B L E                                                   H A L _ P W R E x _ D i s a b l e I n t e r n a l W a k e U p L i n e 
 # d e f i n e   _ _ H A L _ P W R _ I N T E R N A L W A K E U P _ E N A B L E                                                     H A L _ P W R E x _ E n a b l e I n t e r n a l W a k e U p L i n e 
 # d e f i n e   _ _ H A L _ P W R _ P U L L _ U P _ D O W N _ C O N F I G _ D I S A B L E                                         H A L _ P W R E x _ D i s a b l e P u l l U p P u l l D o w n C o n f i g 
 # d e f i n e   _ _ H A L _ P W R _ P U L L _ U P _ D O W N _ C O N F I G _ E N A B L E                                           H A L _ P W R E x _ E n a b l e P u l l U p P u l l D o w n C o n f i g 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ C L E A R _ E G D E _ T R I G G E R ( )                                     d o   {   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ; _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ;   }   w h i l e ( 0 ) 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E V E N T _ D I S A B L E                                                   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ E V E N T 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E V E N T _ E N A B L E                                                     _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ E V E N T 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ F A L L I N G T R I G G E R _ D I S A B L E                                 _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ F A L L I N G T R I G G E R _ E N A B L E                                   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ R I S I N G T R I G G E R _ D I S A B L E                                   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ R I S I N G T R I G G E R _ E N A B L E                                     _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ S E T _ F A L L I N G _ E G D E _ T R I G G E R                             _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ S E T _ R I S I N G _ E D G E _ T R I G G E R                               _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ P V M _ D I S A B L E ( )                                                                     d o   {   H A L _ P W R E x _ D i s a b l e P V M 1 ( ) ; H A L _ P W R E x _ D i s a b l e P V M 2 ( ) ; H A L _ P W R E x _ D i s a b l e P V M 3 ( ) ; H A L _ P W R E x _ D i s a b l e P V M 4 ( ) ;   }   w h i l e ( 0 ) 
 # d e f i n e   _ _ H A L _ P W R _ P V M _ E N A B L E ( )                                                                       d o   {   H A L _ P W R E x _ E n a b l e P V M 1 ( ) ; H A L _ P W R E x _ E n a b l e P V M 2 ( ) ; H A L _ P W R E x _ E n a b l e P V M 3 ( ) ; H A L _ P W R E x _ E n a b l e P V M 4 ( ) ;   }   w h i l e ( 0 ) 
 # d e f i n e   _ _ H A L _ P W R _ S R A M 2 C O N T E N T _ P R E S E R V E _ D I S A B L E                                     H A L _ P W R E x _ D i s a b l e S R A M 2 C o n t e n t R e t e n t i o n 
 # d e f i n e   _ _ H A L _ P W R _ S R A M 2 C O N T E N T _ P R E S E R V E _ E N A B L E                                       H A L _ P W R E x _ E n a b l e S R A M 2 C o n t e n t R e t e n t i o n 
 # d e f i n e   _ _ H A L _ P W R _ V D D I O 2 _ D I S A B L E                                                                   H A L _ P W R E x _ D i s a b l e V d d I O 2 
 # d e f i n e   _ _ H A L _ P W R _ V D D I O 2 _ E N A B L E                                                                     H A L _ P W R E x _ E n a b l e V d d I O 2 
 # d e f i n e   _ _ H A L _ P W R _ V D D I O 2 _ E X T I _ C L E A R _ E G D E _ T R I G G E R                                   _ _ H A L _ P W R _ V D D I O 2 _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ V D D I O 2 _ E X T I _ S E T _ F A L L I N G _ E G D E _ T R I G G E R                       _ _ H A L _ P W R _ V D D I O 2 _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ P W R _ V D D U S B _ D I S A B L E                                                                   H A L _ P W R E x _ D i s a b l e V d d U S B 
 # d e f i n e   _ _ H A L _ P W R _ V D D U S B _ E N A B L E                                                                     H A L _ P W R E x _ E n a b l e V d d U S B 
 
 # i f   d e f i n e d   ( S T M 3 2 F 4 ) 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ E N A B L E _ I T ( P W R _ E X T I _ L I N E _ P V D )                   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ I T ( ) 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ D I S A B L E _ I T ( P W R _ E X T I _ L I N E _ P V D )                 _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ I T ( ) 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ G E T _ F L A G ( P W R _ E X T I _ L I N E _ P V D )                     _ _ H A L _ P W R _ P V D _ E X T I _ G E T _ F L A G ( ) 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ C L E A R _ F L A G ( P W R _ E X T I _ L I N E _ P V D )                 _ _ H A L _ P W R _ P V D _ E X T I _ C L E A R _ F L A G ( ) 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ G E N E R A T E _ S W I T ( P W R _ E X T I _ L I N E _ P V D )           _ _ H A L _ P W R _ P V D _ E X T I _ G E N E R A T E _ S W I T ( ) 
 # e l s e 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ C L E A R _ F L A G                                                                 _ _ H A L _ P W R _ P V D _ E X T I _ C L E A R _ F L A G 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ D I S A B L E _ I T                                                                 _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ E N A B L E _ I T                                                                   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ I T 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ G E N E R A T E _ S W I T                                                           _ _ H A L _ P W R _ P V D _ E X T I _ G E N E R A T E _ S W I T 
 # d e f i n e   _ _ H A L _ P V D _ E X T I _ G E T _ F L A G                                                                     _ _ H A L _ P W R _ P V D _ E X T I _ G E T _ F L A G 
 # e n d i f   / *   S T M 3 2 F 4   * / 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ R C C _ A l i a s e d   H A L   R C C   A l i a s e d   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   R C C _ S t o p W a k e U p C l o c k _ M S I           R C C _ S T O P _ W A K E U P C L O C K _ M S I 
 # d e f i n e   R C C _ S t o p W a k e U p C l o c k _ H S I           R C C _ S T O P _ W A K E U P C L O C K _ H S I 
 
 # d e f i n e   H A L _ R C C _ C C S C a l l b a c k   H A L _ R C C _ C S S C a l l b a c k 
 # d e f i n e   H A L _ R C 4 8 _ E n a b l e B u f f e r _ C m d ( c m d )   ( ( ( c m d ) = = E N A B L E )   ?   H A L _ R C C E x _ E n a b l e H S I 4 8 _ V R E F I N T ( )   :   H A L _ R C C E x _ D i s a b l e H S I 4 8 _ V R E F I N T ( ) ) 
 
 # d e f i n e   _ _ A D C _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ A D C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A D C _ C L K _ E N A B L E                       _ _ H A L _ R C C _ A D C _ C L K _ E N A B L E 
 # d e f i n e   _ _ A D C _ C L K _ S L E E P _ D I S A B L E         _ _ H A L _ R C C _ A D C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ A D C _ C L K _ S L E E P _ E N A B L E           _ _ H A L _ R C C _ A D C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ A D C _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ A D C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A D C _ R E L E A S E _ R E S E T                 _ _ H A L _ R C C _ A D C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A D C 1 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ A D C 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A D C 1 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ A D C 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ A D C 1 _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ A D C 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A D C 1 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ A D C 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A D C 1 _ C L K _ S L E E P _ E N A B L E         _ _ H A L _ R C C _ A D C 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ A D C 1 _ C L K _ S L E E P _ D I S A B L E       _ _ H A L _ R C C _ A D C 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ A D C 2 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ A D C 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A D C 2 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ A D C 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ A D C 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A D C 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A D C 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A D C 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A D C 3 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ A D C 3 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A D C 3 _ C L K _ E N A B L E   _ _ H A L _ R C C _ A D C 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ A D C 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A D C 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A D C 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A D C 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A E S _ C L K _ D I S A B L E   _ _ H A L _ R C C _ A E S _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A E S _ C L K _ E N A B L E   _ _ H A L _ R C C _ A E S _ C L K _ E N A B L E 
 # d e f i n e   _ _ A E S _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ A E S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ A E S _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ A E S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ A E S _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A E S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A E S _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A E S _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C R Y P _ C L K _ S L E E P _ E N A B L E             _ _ H A L _ R C C _ C R Y P _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C R Y P _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ C R Y P _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C R Y P _ C L K _ E N A B L E     _ _ H A L _ R C C _ C R Y P _ C L K _ E N A B L E 
 # d e f i n e   _ _ C R Y P _ C L K _ D I S A B L E     _ _ H A L _ R C C _ C R Y P _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C R Y P _ F O R C E _ R E S E T               _ _ H A L _ R C C _ C R Y P _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C R Y P _ R E L E A S E _ R E S E T     _ _ H A L _ R C C _ C R Y P _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A F I O _ C L K _ D I S A B L E   _ _ H A L _ R C C _ A F I O _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A F I O _ C L K _ E N A B L E   _ _ H A L _ R C C _ A F I O _ C L K _ E N A B L E 
 # d e f i n e   _ _ A F I O _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A F I O _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A F I O _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A F I O _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A H B _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A H B _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A H B _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A H B _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A H B 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A H B 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A H B 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A H B 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A H B 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A H B 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A H B 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A H B 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A H B 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A H B 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A H B 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A H B 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A P B 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A P B 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A P B 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A P B 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A P B 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ A P B 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A P B 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ A P B 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ B K P _ C L K _ D I S A B L E   _ _ H A L _ R C C _ B K P _ C L K _ D I S A B L E 
 # d e f i n e   _ _ B K P _ C L K _ E N A B L E   _ _ H A L _ R C C _ B K P _ C L K _ E N A B L E 
 # d e f i n e   _ _ B K P _ F O R C E _ R E S E T   _ _ H A L _ R C C _ B K P _ F O R C E _ R E S E T 
 # d e f i n e   _ _ B K P _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ B K P _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C A N 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ C A N 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C A N 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ C A N 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ C A N 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ C A N 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C A N 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ C A N 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C A N 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ C A N 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C A N 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ C A N 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C A N _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ C A N 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C A N _ C L K _ E N A B L E                     _ _ H A L _ R C C _ C A N 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ C A N _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ C A N 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C A N _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ C A N 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C A N 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ C A N 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C A N 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ C A N 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ C A N 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ C A N 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C A N 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ C A N 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C E C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ C E C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C E C _ C L K _ E N A B L E   _ _ H A L _ R C C _ C E C _ C L K _ E N A B L E 
 # d e f i n e   _ _ C O M P _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ C O M P _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C O M P _ C L K _ E N A B L E                   _ _ H A L _ R C C _ C O M P _ C L K _ E N A B L E 
 # d e f i n e   _ _ C O M P _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ C O M P _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C O M P _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ C O M P _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C O M P _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ C O M P _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C O M P _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ C O M P _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C E C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ C E C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C E C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ C E C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ C R C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ C R C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C R C _ C L K _ E N A B L E   _ _ H A L _ R C C _ C R C _ C L K _ E N A B L E 
 # d e f i n e   _ _ C R C _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ C R C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C R C _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ C R C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C R C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ C R C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C R C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ C R C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D A C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ D A C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D A C _ C L K _ E N A B L E   _ _ H A L _ R C C _ D A C _ C L K _ E N A B L E 
 # d e f i n e   _ _ D A C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ D A C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D A C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ D A C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D A C 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ D A C 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D A C 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ D A C 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ D A C 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ D A C 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ D A C 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ D A C 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D A C 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ D A C 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D A C 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ D A C 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D B G M C U _ C L K _ E N A B L E           _ _ H A L _ R C C _ D B G M C U _ C L K _ E N A B L E 
 # d e f i n e   _ _ D B G M C U _ C L K _ D I S A B L E           _ _ H A L _ R C C _ D B G M C U _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D B G M C U _ F O R C E _ R E S E T         _ _ H A L _ R C C _ D B G M C U _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D B G M C U _ R E L E A S E _ R E S E T     _ _ H A L _ R C C _ D B G M C U _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D F S D M _ C L K _ D I S A B L E   _ _ H A L _ R C C _ D F S D M _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D F S D M _ C L K _ E N A B L E   _ _ H A L _ R C C _ D F S D M _ C L K _ E N A B L E 
 # d e f i n e   _ _ D F S D M _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ D F S D M _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ D F S D M _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ D F S D M _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D F S D M _ F O R C E _ R E S E T   _ _ H A L _ R C C _ D F S D M _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D F S D M _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ D F S D M _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D M A 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ D M A 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D M A 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ D M A 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ D M A 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ D M A 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ D M A 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ D M A 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D M A 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ D M A 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D M A 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ D M A 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D M A 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ D M A 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D M A 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ D M A 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ D M A 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ D M A 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ D M A 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ D M A 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D M A 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ D M A 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D M A 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ D M A 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ E T H M A C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ E T H M A C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C _ C L K _ E N A B L E   _ _ H A L _ R C C _ E T H M A C _ C L K _ E N A B L E 
 # d e f i n e   _ _ E T H M A C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ E T H M A C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ E T H M A C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ E T H M A C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ E T H M A C R X _ C L K _ D I S A B L E   _ _ H A L _ R C C _ E T H M A C R X _ C L K _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C R X _ C L K _ E N A B L E   _ _ H A L _ R C C _ E T H M A C R X _ C L K _ E N A B L E 
 # d e f i n e   _ _ E T H M A C T X _ C L K _ D I S A B L E   _ _ H A L _ R C C _ E T H M A C T X _ C L K _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C T X _ C L K _ E N A B L E   _ _ H A L _ R C C _ E T H M A C T X _ C L K _ E N A B L E 
 # d e f i n e   _ _ F I R E W A L L _ C L K _ D I S A B L E   _ _ H A L _ R C C _ F I R E W A L L _ C L K _ D I S A B L E 
 # d e f i n e   _ _ F I R E W A L L _ C L K _ E N A B L E   _ _ H A L _ R C C _ F I R E W A L L _ C L K _ E N A B L E 
 # d e f i n e   _ _ F L A S H _ C L K _ D I S A B L E   _ _ H A L _ R C C _ F L A S H _ C L K _ D I S A B L E 
 # d e f i n e   _ _ F L A S H _ C L K _ E N A B L E   _ _ H A L _ R C C _ F L A S H _ C L K _ E N A B L E 
 # d e f i n e   _ _ F L A S H _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ F L A S H _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ F L A S H _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ F L A S H _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ F L A S H _ F O R C E _ R E S E T   _ _ H A L _ R C C _ F L A S H _ F O R C E _ R E S E T 
 # d e f i n e   _ _ F L A S H _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ F L A S H _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ F L I T F _ C L K _ D I S A B L E               _ _ H A L _ R C C _ F L I T F _ C L K _ D I S A B L E 
 # d e f i n e   _ _ F L I T F _ C L K _ E N A B L E                 _ _ H A L _ R C C _ F L I T F _ C L K _ E N A B L E 
 # d e f i n e   _ _ F L I T F _ F O R C E _ R E S E T               _ _ H A L _ R C C _ F L I T F _ F O R C E _ R E S E T 
 # d e f i n e   _ _ F L I T F _ R E L E A S E _ R E S E T           _ _ H A L _ R C C _ F L I T F _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ F L I T F _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ F L I T F _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ F L I T F _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ F L I T F _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ F M C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ F M C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ F M C _ C L K _ E N A B L E   _ _ H A L _ R C C _ F M C _ C L K _ E N A B L E 
 # d e f i n e   _ _ F M C _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ F M C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ F M C _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ F M C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ F M C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ F M C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ F M C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ F M C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ F S M C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ F S M C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ F S M C _ C L K _ E N A B L E   _ _ H A L _ R C C _ F S M C _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O A _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O A _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O A _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O A _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O A _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O A _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O A _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O A _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O A _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O A _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O A _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O A _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O B _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O B _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O B _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O B _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O B _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O B _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O B _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O B _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O B _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O B _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O B _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O B _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O C _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O C _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O C _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O C _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O D _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O D _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O D _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O D _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O D _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O D _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O D _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O D _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O D _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O D _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O D _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O D _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O E _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O E _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O E _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O E _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O E _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O E _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O E _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O E _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O E _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O E _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O E _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O E _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O F _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O F _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O F _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O F _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O F _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O F _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O F _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O F _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O F _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O F _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O F _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O F _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O G _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O G _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O G _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O G _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O G _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O G _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O G _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O G _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O G _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O G _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O G _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O G _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O H _ C L K _ D I S A B L E   _ _ H A L _ R C C _ G P I O H _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O H _ C L K _ E N A B L E   _ _ H A L _ R C C _ G P I O H _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O H _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ G P I O H _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O H _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ G P I O H _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O H _ F O R C E _ R E S E T   _ _ H A L _ R C C _ G P I O H _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O H _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ G P I O H _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ I 2 C 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ I 2 C 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ I 2 C 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ I 2 C 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ I 2 C 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ I 2 C 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ I 2 C 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ I 2 C 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ I 2 C 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ I 2 C 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ I 2 C 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ I 2 C 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ I 2 C 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ I 2 C 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ I 2 C 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ I 2 C 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ I 2 C 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ I 2 C 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ I 2 C 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ I 2 C 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ I 2 C 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ I 2 C 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ I 2 C 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ I 2 C 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ I 2 C 3 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ I 2 C 3 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ I 2 C 3 _ C L K _ E N A B L E   _ _ H A L _ R C C _ I 2 C 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ I 2 C 3 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ I 2 C 3 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ I 2 C 3 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ I 2 C 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ I 2 C 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ I 2 C 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ I 2 C 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ I 2 C 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ L C D _ C L K _ D I S A B L E   _ _ H A L _ R C C _ L C D _ C L K _ D I S A B L E 
 # d e f i n e   _ _ L C D _ C L K _ E N A B L E   _ _ H A L _ R C C _ L C D _ C L K _ E N A B L E 
 # d e f i n e   _ _ L C D _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ L C D _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ L C D _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ L C D _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ L C D _ F O R C E _ R E S E T   _ _ H A L _ R C C _ L C D _ F O R C E _ R E S E T 
 # d e f i n e   _ _ L C D _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ L C D _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ L P T I M 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ L P T I M 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ L P T I M 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ L P T I M 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ L P T I M 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ L P T I M 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ L P T I M 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ L P T I M 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ L P T I M 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ L P T I M 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ L P T I M 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ L P T I M 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ L P T I M 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ L P T I M 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ L P T I M 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ L P T I M 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ L P T I M 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ L P T I M 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ L P T I M 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ L P T I M 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ L P T I M 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ L P T I M 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ L P T I M 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ L P T I M 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ L P U A R T 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ L P U A R T 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ L P U A R T 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ L P U A R T 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ L P U A R T 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ L P U A R T 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ L P U A R T 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ L P U A R T 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ L P U A R T 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ L P U A R T 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ L P U A R T 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ L P U A R T 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ O P A M P _ C L K _ D I S A B L E   _ _ H A L _ R C C _ O P A M P _ C L K _ D I S A B L E 
 # d e f i n e   _ _ O P A M P _ C L K _ E N A B L E   _ _ H A L _ R C C _ O P A M P _ C L K _ E N A B L E 
 # d e f i n e   _ _ O P A M P _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ O P A M P _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ O P A M P _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ O P A M P _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ O P A M P _ F O R C E _ R E S E T   _ _ H A L _ R C C _ O P A M P _ F O R C E _ R E S E T 
 # d e f i n e   _ _ O P A M P _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ O P A M P _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ O T G F S _ C L K _ D I S A B L E   _ _ H A L _ R C C _ O T G F S _ C L K _ D I S A B L E 
 # d e f i n e   _ _ O T G F S _ C L K _ E N A B L E   _ _ H A L _ R C C _ O T G F S _ C L K _ E N A B L E 
 # d e f i n e   _ _ O T G F S _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ O T G F S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ O T G F S _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ O T G F S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ O T G F S _ F O R C E _ R E S E T   _ _ H A L _ R C C _ O T G F S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ O T G F S _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ O T G F S _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ P W R _ C L K _ D I S A B L E   _ _ H A L _ R C C _ P W R _ C L K _ D I S A B L E 
 # d e f i n e   _ _ P W R _ C L K _ E N A B L E   _ _ H A L _ R C C _ P W R _ C L K _ E N A B L E 
 # d e f i n e   _ _ P W R _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ P W R _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ P W R _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ P W R _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ P W R _ F O R C E _ R E S E T   _ _ H A L _ R C C _ P W R _ F O R C E _ R E S E T 
 # d e f i n e   _ _ P W R _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ P W R _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ Q S P I _ C L K _ D I S A B L E   _ _ H A L _ R C C _ Q S P I _ C L K _ D I S A B L E 
 # d e f i n e   _ _ Q S P I _ C L K _ E N A B L E   _ _ H A L _ R C C _ Q S P I _ C L K _ E N A B L E 
 # d e f i n e   _ _ Q S P I _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ Q S P I _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ Q S P I _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ Q S P I _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ Q S P I _ F O R C E _ R E S E T   _ _ H A L _ R C C _ Q S P I _ F O R C E _ R E S E T 
 # d e f i n e   _ _ Q S P I _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ Q S P I _ R E L E A S E _ R E S E T 
 
 # i f   d e f i n e d ( S T M 3 2 W B ) 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ C L K _ D I S A B L E                         _ _ H A L _ R C C _ Q U A D S P I _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ C L K _ E N A B L E                           _ _ H A L _ R C C _ Q U A D S P I _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ C L K _ S L E E P _ D I S A B L E             _ _ H A L _ R C C _ Q U A D S P I _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ C L K _ S L E E P _ E N A B L E               _ _ H A L _ R C C _ Q U A D S P I _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ F O R C E _ R E S E T                         _ _ H A L _ R C C _ Q U A D S P I _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ Q U A D S P I _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ I S _ C L K _ E N A B L E D                   _ _ H A L _ R C C _ Q U A D S P I _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ I S _ C L K _ D I S A B L E D                 _ _ H A L _ R C C _ Q U A D S P I _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ I S _ C L K _ S L E E P _ E N A B L E D       _ _ H A L _ R C C _ Q U A D S P I _ I S _ C L K _ S L E E P _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ Q S P I _ I S _ C L K _ S L E E P _ D I S A B L E D     _ _ H A L _ R C C _ Q U A D S P I _ I S _ C L K _ S L E E P _ D I S A B L E D 
 # d e f i n e   Q S P I _ I R Q H a n d l e r   Q U A D S P I _ I R Q H a n d l e r 
 # e n d i f   / *   _ _ H A L _ R C C _ Q U A D S P I _ C L K _ E N A B L E   * / 
 
 # d e f i n e   _ _ R N G _ C L K _ D I S A B L E   _ _ H A L _ R C C _ R N G _ C L K _ D I S A B L E 
 # d e f i n e   _ _ R N G _ C L K _ E N A B L E   _ _ H A L _ R C C _ R N G _ C L K _ E N A B L E 
 # d e f i n e   _ _ R N G _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ R N G _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ R N G _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ R N G _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ R N G _ F O R C E _ R E S E T   _ _ H A L _ R C C _ R N G _ F O R C E _ R E S E T 
 # d e f i n e   _ _ R N G _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ R N G _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S A I 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S A I 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S A I 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ S A I 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S A I 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S A I 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S A I 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S A I 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S A I 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S A I 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S A I 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S A I 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S A I 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S A I 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S A I 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ S A I 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S A I 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S A I 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S A I 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S A I 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S A I 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S A I 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S A I 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S A I 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S D I O _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S D I O _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S D I O _ C L K _ E N A B L E   _ _ H A L _ R C C _ S D I O _ C L K _ E N A B L E 
 # d e f i n e   _ _ S D M M C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S D M M C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S D M M C _ C L K _ E N A B L E   _ _ H A L _ R C C _ S D M M C _ C L K _ E N A B L E 
 # d e f i n e   _ _ S D M M C _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S D M M C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S D M M C _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S D M M C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S D M M C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S D M M C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S D M M C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S D M M C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S P I 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S P I 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ S P I 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S P I 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S P I 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S P I 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S P I 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S P I 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S P I 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S P I 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S P I 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S P I 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S P I 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ S P I 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S P I 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S P I 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S P I 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S P I 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S P I 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S P I 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S P I 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S P I 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S P I 3 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S P I 3 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 3 _ C L K _ E N A B L E   _ _ H A L _ R C C _ S P I 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S P I 3 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S P I 3 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S P I 3 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S P I 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S P I 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S P I 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S P I 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S P I 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S R A M _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S R A M _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S R A M _ C L K _ E N A B L E   _ _ H A L _ R C C _ S R A M _ C L K _ E N A B L E 
 # d e f i n e   _ _ S R A M 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S R A M 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S R A M 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S R A M 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S R A M 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S R A M 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S R A M 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S R A M 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S W P M I 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S W P M I 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S W P M I 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ S W P M I 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S W P M I 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S W P M I 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S W P M I 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S W P M I 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S W P M I 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S W P M I 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S W P M I 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S W P M I 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S Y S C F G _ C L K _ D I S A B L E   _ _ H A L _ R C C _ S Y S C F G _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S Y S C F G _ C L K _ E N A B L E   _ _ H A L _ R C C _ S Y S C F G _ C L K _ E N A B L E 
 # d e f i n e   _ _ S Y S C F G _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S Y S C F G _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S Y S C F G _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ S Y S C F G _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S Y S C F G _ F O R C E _ R E S E T   _ _ H A L _ R C C _ S Y S C F G _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S Y S C F G _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ S Y S C F G _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 0 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 0 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 0 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 0 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 0 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 0 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 0 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 0 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 3 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 3 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 3 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 4 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 4 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 4 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 4 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 4 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 4 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 4 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 4 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 5 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 5 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 5 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 5 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 5 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 5 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 5 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 1 5 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 5 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 5 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 5 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 5 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 6 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 6 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 6 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 6 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 6 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 6 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 6 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 1 6 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 6 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 6 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 6 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 6 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 7 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 7 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 7 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 1 7 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 7 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 1 7 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 7 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 1 7 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 7 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 1 7 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 7 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 1 7 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 3 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 3 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 3 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 3 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 3 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 3 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 4 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 4 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 4 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 4 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 4 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 4 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 4 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 4 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 4 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 4 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 4 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 4 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 5 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 5 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 5 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 5 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 5 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 5 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 5 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 5 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 5 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 5 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 5 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 5 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 6 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 6 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 6 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 6 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 6 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 6 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 6 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 6 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 6 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 6 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 6 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 6 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 7 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 7 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 7 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 7 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 7 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 7 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 7 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 7 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 7 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 7 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 7 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 7 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 8 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 8 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 8 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 8 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 8 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T I M 8 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 8 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T I M 8 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 8 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 8 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 8 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 8 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 9 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T I M 9 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 9 _ C L K _ E N A B L E   _ _ H A L _ R C C _ T I M 9 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 9 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T I M 9 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 9 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T I M 9 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T S C _ C L K _ D I S A B L E   _ _ H A L _ R C C _ T S C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T S C _ C L K _ E N A B L E   _ _ H A L _ R C C _ T S C _ C L K _ E N A B L E 
 # d e f i n e   _ _ T S C _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ T S C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T S C _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ T S C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T S C _ F O R C E _ R E S E T   _ _ H A L _ R C C _ T S C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T S C _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ T S C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U A R T 4 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ U A R T 4 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U A R T 4 _ C L K _ E N A B L E   _ _ H A L _ R C C _ U A R T 4 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U A R T 4 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ U A R T 4 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U A R T 4 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ U A R T 4 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U A R T 4 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ U A R T 4 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U A R T 4 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ U A R T 4 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U A R T 5 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ U A R T 5 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U A R T 5 _ C L K _ E N A B L E   _ _ H A L _ R C C _ U A R T 5 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U A R T 5 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ U A R T 5 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U A R T 5 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ U A R T 5 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U A R T 5 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ U A R T 5 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U A R T 5 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ U A R T 5 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 1 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ U S A R T 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 1 _ C L K _ E N A B L E   _ _ H A L _ R C C _ U S A R T 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ U S A R T 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 1 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ U S A R T 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S A R T 1 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ U S A R T 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 1 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ U S A R T 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 2 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ U S A R T 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 2 _ C L K _ E N A B L E   _ _ H A L _ R C C _ U S A R T 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 2 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ U S A R T 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 2 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ U S A R T 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S A R T 2 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ U S A R T 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 2 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ U S A R T 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 3 _ C L K _ D I S A B L E   _ _ H A L _ R C C _ U S A R T 3 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 3 _ C L K _ E N A B L E   _ _ H A L _ R C C _ U S A R T 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 3 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ U S A R T 3 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 3 _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ U S A R T 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S A R T 3 _ F O R C E _ R E S E T   _ _ H A L _ R C C _ U S A R T 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 3 _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ U S A R T 3 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 4 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ U A R T 4 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 4 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ U A R T 4 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 4 _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ U A R T 4 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S A R T 4 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U A R T 4 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 4 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ U A R T 4 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 4 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ U A R T 4 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 5 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ U A R T 5 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 5 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ U A R T 5 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 5 _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ U A R T 5 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S A R T 5 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U A R T 5 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 5 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ U A R T 5 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 5 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ U A R T 5 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 7 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ U A R T 7 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 7 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ U A R T 7 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 7 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ U A R T 7 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 7 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ U A R T 7 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 8 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ U A R T 8 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 8 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ U A R T 8 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 8 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ U A R T 8 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 8 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ U A R T 8 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S B _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ U S B _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S B _ C L K _ E N A B L E                     _ _ H A L _ R C C _ U S B _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S B _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ U S B _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S B _ C L K _ S L E E P _ E N A B L E         _ _ H A L _ R C C _ U S B _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S B _ C L K _ S L E E P _ D I S A B L E       _ _ H A L _ R C C _ U S B _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S B _ O T G _ F S _ C L K _ D I S A B L E   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S B _ O T G _ F S _ C L K _ E N A B L E   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S B _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ U S B _ R E L E A S E _ R E S E T 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   _ _ H A L _ R C C _ W W D G _ C L K _ D I S A B L E       _ _ H A L _ R C C _ W W D G 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ W W D G _ C L K _ E N A B L E       _ _ H A L _ R C C _ W W D G 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ W W D G _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ W W D G 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ W W D G _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ W W D G 1 _ C L K _ S L E E P _ E N A B L E 
 
 # d e f i n e   _ _ H A L _ R C C _ W W D G _ F O R C E _ R E S E T         ( ( v o i d ) 0 U )     / *   N o t   a v a i l a b l e   o n   t h e   S T M 3 2 H 7 * / 
 # d e f i n e   _ _ H A L _ R C C _ W W D G _ R E L E A S E _ R E S E T   ( ( v o i d ) 0 U )   / *   N o t   a v a i l a b l e   o n   t h e   S T M 3 2 H 7 * / 
 
 
 # d e f i n e     _ _ H A L _ R C C _ W W D G _ I S _ C L K _ E N A B L E D         _ _ H A L _ R C C _ W W D G 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e     _ _ H A L _ R C C _ W W D G _ I S _ C L K _ D I S A B L E D     _ _ H A L _ R C C _ W W D G 1 _ I S _ C L K _ D I S A B L E D 
 # e n d i f 
 
 # d e f i n e   _ _ W W D G _ C L K _ D I S A B L E   _ _ H A L _ R C C _ W W D G _ C L K _ D I S A B L E 
 # d e f i n e   _ _ W W D G _ C L K _ E N A B L E   _ _ H A L _ R C C _ W W D G _ C L K _ E N A B L E 
 # d e f i n e   _ _ W W D G _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ W W D G _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ W W D G _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ W W D G _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ W W D G _ F O R C E _ R E S E T   _ _ H A L _ R C C _ W W D G _ F O R C E _ R E S E T 
 # d e f i n e   _ _ W W D G _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ W W D G _ R E L E A S E _ R E S E T 
 
 # d e f i n e   _ _ T I M 2 1 _ C L K _ E N A B L E       _ _ H A L _ R C C _ T I M 2 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 2 1 _ C L K _ D I S A B L E       _ _ H A L _ R C C _ T I M 2 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 2 1 _ F O R C E _ R E S E T       _ _ H A L _ R C C _ T I M 2 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 2 1 _ R E L E A S E _ R E S E T     _ _ H A L _ R C C _ T I M 2 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 2 1 _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ T I M 2 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 2 1 _ C L K _ S L E E P _ D I S A B L E       _ _ H A L _ R C C _ T I M 2 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 2 2 _ C L K _ E N A B L E       _ _ H A L _ R C C _ T I M 2 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 2 2 _ C L K _ D I S A B L E       _ _ H A L _ R C C _ T I M 2 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 2 2 _ F O R C E _ R E S E T       _ _ H A L _ R C C _ T I M 2 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 2 2 _ R E L E A S E _ R E S E T     _ _ H A L _ R C C _ T I M 2 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 2 2 _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ T I M 2 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 2 2 _ C L K _ S L E E P _ D I S A B L E       _ _ H A L _ R C C _ T I M 2 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C R S _ C L K _ D I S A B L E   _ _ H A L _ R C C _ C R S _ C L K _ D I S A B L E 
 # d e f i n e   _ _ C R S _ C L K _ E N A B L E   _ _ H A L _ R C C _ C R S _ C L K _ E N A B L E 
 # d e f i n e   _ _ C R S _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ C R S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C R S _ C L K _ S L E E P _ E N A B L E   _ _ H A L _ R C C _ C R S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C R S _ F O R C E _ R E S E T   _ _ H A L _ R C C _ C R S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ C R S _ R E L E A S E _ R E S E T   _ _ H A L _ R C C _ C R S _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ R C C _ B A C K U P R E S E T _ F O R C E   _ _ H A L _ R C C _ B A C K U P R E S E T _ F O R C E 
 # d e f i n e   _ _ R C C _ B A C K U P R E S E T _ R E L E A S E   _ _ H A L _ R C C _ B A C K U P R E S E T _ R E L E A S E 
 
 # d e f i n e   _ _ U S B _ O T G _ F S _ F O R C E _ R E S E T     _ _ H A L _ R C C _ U S B _ O T G _ F S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S B _ O T G _ F S _ R E L E A S E _ R E S E T     _ _ H A L _ R C C _ U S B _ O T G _ F S _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S B _ O T G _ F S _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S B _ O T G _ F S _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U S B _ O T G _ H S _ C L K _ D I S A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S B _ O T G _ H S _ C L K _ E N A B L E                     _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S B _ O T G _ H S _ U L P I _ C L K _ E N A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S B _ O T G _ H S _ U L P I _ C L K _ D I S A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 9 _ C L K _ S L E E P _ E N A B L E                     _ _ H A L _ R C C _ T I M 9 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 9 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ T I M 9 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 0 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ T I M 1 0 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 0 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ T I M 1 0 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 1 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ T I M 1 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 1 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ T I M 1 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C P T P _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ E T H M A C P T P _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ E T H M A C P T P _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ E T H M A C P T P _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C P T P _ C L K _ E N A B L E                     _ _ H A L _ R C C _ E T H M A C P T P _ C L K _ E N A B L E 
 # d e f i n e   _ _ E T H M A C P T P _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ E T H M A C P T P _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A S H _ C L K _ E N A B L E                     _ _ H A L _ R C C _ H A S H _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A S H _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ H A S H _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A S H _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ H A S H _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A S H _ C L K _ S L E E P _ E N A B L E                     _ _ H A L _ R C C _ H A S H _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A S H _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ H A S H _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A S H _ C L K _ D I S A B L E                         _ _ H A L _ R C C _ H A S H _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 5 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ S P I 5 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S P I 5 _ C L K _ D I S A B L E                             _ _ H A L _ R C C _ S P I 5 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 5 _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ S P I 5 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S P I 5 _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ S P I 5 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S P I 5 _ C L K _ S L E E P _ E N A B L E                     _ _ H A L _ R C C _ S P I 5 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S P I 5 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ S P I 5 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S P I 6 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ S P I 6 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S P I 6 _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ S P I 6 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 6 _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ S P I 6 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S P I 6 _ R E L E A S E _ R E S E T                   _ _ H A L _ R C C _ S P I 6 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S P I 6 _ C L K _ S L E E P _ E N A B L E                     _ _ H A L _ R C C _ S P I 6 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S P I 6 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ S P I 6 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ L T D C _ C L K _ E N A B L E                     _ _ H A L _ R C C _ L T D C _ C L K _ E N A B L E 
 # d e f i n e   _ _ L T D C _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ L T D C _ C L K _ D I S A B L E 
 # d e f i n e   _ _ L T D C _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ L T D C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ L T D C _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ L T D C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ L T D C _ C L K _ S L E E P _ E N A B L E                     _ _ H A L _ R C C _ L T D C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ E T H M A C _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ E T H M A C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ E T H M A C _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ E T H M A C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C T X _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ E T H M A C T X _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ E T H M A C T X _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ E T H M A C T X _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ E T H M A C R X _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ E T H M A C R X _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ E T H M A C R X _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ E T H M A C R X _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 2 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ T I M 1 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 2 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ T I M 1 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 3 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ T I M 1 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 3 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ T I M 1 3 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 4 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ T I M 1 4 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ T I M 1 4 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ T I M 1 4 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ B K P S R A M _ C L K _ E N A B L E                     _ _ H A L _ R C C _ B K P S R A M _ C L K _ E N A B L E 
 # d e f i n e   _ _ B K P S R A M _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ B K P S R A M _ C L K _ D I S A B L E 
 # d e f i n e   _ _ B K P S R A M _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ B K P S R A M _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ B K P S R A M _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ B K P S R A M _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ C C M D A T A R A M E N _ C L K _ E N A B L E     _ _ H A L _ R C C _ C C M D A T A R A M E N _ C L K _ E N A B L E 
 # d e f i n e   _ _ C C M D A T A R A M E N _ C L K _ D I S A B L E     _ _ H A L _ R C C _ C C M D A T A R A M E N _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 6 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ U S A R T 6 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U S A R T 6 _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ U S A R T 6 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U S A R T 6 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ U S A R T 6 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U S A R T 6 _ R E L E A S E _ R E S E T                 _ _ H A L _ R C C _ U S A R T 6 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U S A R T 6 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U S A R T 6 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U S A R T 6 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U S A R T 6 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S P I 4 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ S P I 4 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S P I 4 _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ S P I 4 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S P I 4 _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ S P I 4 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S P I 4 _ R E L E A S E _ R E S E T                 _ _ H A L _ R C C _ S P I 4 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S P I 4 _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ S P I 4 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ S P I 4 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ S P I 4 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O I _ C L K _ E N A B L E                     _ _ H A L _ R C C _ G P I O I _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O I _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ G P I O I _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O I _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ G P I O I _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O I _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ G P I O I _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O I _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ G P I O I _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O I _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ G P I O I _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O J _ C L K _ E N A B L E                     _ _ H A L _ R C C _ G P I O J _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O J _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ G P I O J _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O J _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ G P I O J _ F O R C E _ R E S E T 
 # d e f i n e   _ _ G P I O J _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ G P I O J _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O J _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ G P I O J _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O J _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ G P I O J _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ G P I O K _ C L K _ E N A B L E                     _ _ H A L _ R C C _ G P I O K _ C L K _ E N A B L E 
 # d e f i n e   _ _ G P I O K _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ G P I O K _ C L K _ D I S A B L E 
 # d e f i n e   _ _ G P I O K _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ G P I O K _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ G P I O K _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ G P I O K _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ G P I O K _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ G P I O K _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ E T H _ C L K _ E N A B L E                     _ _ H A L _ R C C _ E T H _ C L K _ E N A B L E 
 # d e f i n e   _ _ E T H _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ E T H _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D C M I _ C L K _ E N A B L E                     _ _ H A L _ R C C _ D C M I _ C L K _ E N A B L E 
 # d e f i n e   _ _ D C M I _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ D C M I _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D C M I _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ D C M I _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D C M I _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ D C M I _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D C M I _ C L K _ S L E E P _ E N A B L E       _ _ H A L _ R C C _ D C M I _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D C M I _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ D C M I _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U A R T 7 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ U A R T 7 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U A R T 7 _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ U A R T 7 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U A R T 7 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ U A R T 7 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U A R T 7 _ F O R C E _ R E S E T               _ _ H A L _ R C C _ U A R T 7 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U A R T 7 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U A R T 7 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U A R T 7 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U A R T 7 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ U A R T 8 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ U A R T 8 _ C L K _ E N A B L E 
 # d e f i n e   _ _ U A R T 8 _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ U A R T 8 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ U A R T 8 _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ U A R T 8 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ U A R T 8 _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ U A R T 8 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ U A R T 8 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U A R T 8 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ U A R T 8 _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U A R T 8 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ O T G H S _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ O T G H S _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ O T G H S _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ U S B _ O T G _ H S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ O T G H S _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ U S B _ O T G _ H S _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ O T G H S U L P I _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ O T G H S U L P I _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S _ C L K _ S L E E P _ D I S A B L E     _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S _ I S _ C L K _ S L E E P _ E N A B L E D   _ _ H A L _ R C C _ U S B _ O T G _ H S _ I S _ C L K _ S L E E P _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S _ I S _ C L K _ S L E E P _ D I S A B L E D   _ _ H A L _ R C C _ U S B _ O T G _ H S _ I S _ C L K _ S L E E P _ D I S A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ U S B _ O T G _ H S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ U S B _ O T G _ H S _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S U L P I _ C L K _ S L E E P _ E N A B L E             _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S U L P I _ C L K _ S L E E P _ D I S A B L E           _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S U L P I _ I S _ C L K _ S L E E P _ E N A B L E D     _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ I S _ C L K _ S L E E P _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ O T G H S U L P I _ I S _ C L K _ S L E E P _ D I S A B L E D   _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ I S _ C L K _ S L E E P _ D I S A B L E D 
 # d e f i n e   _ _ S R A M 3 _ C L K _ S L E E P _ E N A B L E               _ _ H A L _ R C C _ S R A M 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C A N 2 _ C L K _ S L E E P _ E N A B L E                 _ _ H A L _ R C C _ C A N 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ C A N 2 _ C L K _ S L E E P _ D I S A B L E               _ _ H A L _ R C C _ C A N 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ D A C _ C L K _ S L E E P _ E N A B L E                   _ _ H A L _ R C C _ D A C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D A C _ C L K _ S L E E P _ D I S A B L E                 _ _ H A L _ R C C _ D A C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ A D C 2 _ C L K _ S L E E P _ E N A B L E                 _ _ H A L _ R C C _ A D C 2 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ A D C 2 _ C L K _ S L E E P _ D I S A B L E               _ _ H A L _ R C C _ A D C 2 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ A D C 3 _ C L K _ S L E E P _ E N A B L E                 _ _ H A L _ R C C _ A D C 3 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ A D C 3 _ C L K _ S L E E P _ D I S A B L E               _ _ H A L _ R C C _ A D C 3 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ F S M C _ F O R C E _ R E S E T                           _ _ H A L _ R C C _ F S M C _ F O R C E _ R E S E T 
 # d e f i n e   _ _ F S M C _ R E L E A S E _ R E S E T                       _ _ H A L _ R C C _ F S M C _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ F S M C _ C L K _ S L E E P _ E N A B L E                 _ _ H A L _ R C C _ F S M C _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ F S M C _ C L K _ S L E E P _ D I S A B L E               _ _ H A L _ R C C _ F S M C _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S D I O _ F O R C E _ R E S E T                           _ _ H A L _ R C C _ S D I O _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S D I O _ R E L E A S E _ R E S E T                       _ _ H A L _ R C C _ S D I O _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S D I O _ C L K _ S L E E P _ D I S A B L E               _ _ H A L _ R C C _ S D I O _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ S D I O _ C L K _ S L E E P _ E N A B L E                 _ _ H A L _ R C C _ S D I O _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D M A 2 D _ C L K _ E N A B L E                           _ _ H A L _ R C C _ D M A 2 D _ C L K _ E N A B L E 
 # d e f i n e   _ _ D M A 2 D _ C L K _ D I S A B L E                         _ _ H A L _ R C C _ D M A 2 D _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D M A 2 D _ F O R C E _ R E S E T                         _ _ H A L _ R C C _ D M A 2 D _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D M A 2 D _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ D M A 2 D _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D M A 2 D _ C L K _ S L E E P _ E N A B L E               _ _ H A L _ R C C _ D M A 2 D _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ D M A 2 D _ C L K _ S L E E P _ D I S A B L E             _ _ H A L _ R C C _ D M A 2 D _ C L K _ S L E E P _ D I S A B L E 
 
 / *   a l i a s   d e f i n e   m a i n t a i n e d   f o r   l e g a c y   * / 
 # d e f i n e   _ _ H A L _ R C C _ O T G F S _ F O R C E _ R E S E T         _ _ H A L _ R C C _ U S B _ O T G _ F S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ O T G F S _ R E L E A S E _ R E S E T     _ _ H A L _ R C C _ U S B _ O T G _ F S _ R E L E A S E _ R E S E T 
 
 # d e f i n e   _ _ A D C 1 2 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ A D C 1 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ A D C 1 2 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ A D C 1 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ A D C 3 4 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ A D C 3 4 _ C L K _ E N A B L E 
 # d e f i n e   _ _ A D C 3 4 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ A D C 3 4 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ D A C 2 _ C L K _ E N A B L E                       _ _ H A L _ R C C _ D A C 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ D A C 2 _ C L K _ D I S A B L E                     _ _ H A L _ R C C _ D A C 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 8 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ T I M 1 8 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 8 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ T I M 1 8 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 1 9 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ T I M 1 9 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 1 9 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ T I M 1 9 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ T I M 2 0 _ C L K _ E N A B L E                     _ _ H A L _ R C C _ T I M 2 0 _ C L K _ E N A B L E 
 # d e f i n e   _ _ T I M 2 0 _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ T I M 2 0 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H R T I M 1 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ H R T I M 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ H R T I M 1 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ H R T I M 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S D A D C 1 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ S D A D C 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S D A D C 2 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ S D A D C 2 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S D A D C 3 _ C L K _ E N A B L E                   _ _ H A L _ R C C _ S D A D C 3 _ C L K _ E N A B L E 
 # d e f i n e   _ _ S D A D C 1 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ S D A D C 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S D A D C 2 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ S D A D C 2 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ S D A D C 3 _ C L K _ D I S A B L E                 _ _ H A L _ R C C _ S D A D C 3 _ C L K _ D I S A B L E 
 
 # d e f i n e   _ _ A D C 1 2 _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ A D C 1 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A D C 1 2 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ A D C 1 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ A D C 3 4 _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ A D C 3 4 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ A D C 3 4 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ A D C 3 4 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ D A C 2 _ F O R C E _ R E S E T                     _ _ H A L _ R C C _ D A C 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ D A C 2 _ R E L E A S E _ R E S E T                 _ _ H A L _ R C C _ D A C 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 8 _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ T I M 1 8 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 8 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ T I M 1 8 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 1 9 _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ T I M 1 9 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 1 9 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ T I M 1 9 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ T I M 2 0 _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ T I M 2 0 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ T I M 2 0 _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ T I M 2 0 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H R T I M 1 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ H R T I M 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H R T I M 1 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ H R T I M 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S D A D C 1 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ S D A D C 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S D A D C 2 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ S D A D C 2 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S D A D C 3 _ F O R C E _ R E S E T                 _ _ H A L _ R C C _ S D A D C 3 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ S D A D C 1 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ S D A D C 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S D A D C 2 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ S D A D C 2 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ S D A D C 3 _ R E L E A S E _ R E S E T             _ _ H A L _ R C C _ S D A D C 3 _ R E L E A S E _ R E S E T 
 
 # d e f i n e   _ _ A D C 1 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ A D C 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ A D C 1 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ A D C 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ A D C 1 2 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ A D C 1 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ A D C 1 2 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ A D C 1 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ A D C 3 4 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ A D C 3 4 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ A D C 3 4 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ A D C 3 4 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ C E C _ I S _ C L K _ E N A B L E D                 _ _ H A L _ R C C _ C E C _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ C E C _ I S _ C L K _ D I S A B L E D               _ _ H A L _ R C C _ C E C _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ C R C _ I S _ C L K _ E N A B L E D                 _ _ H A L _ R C C _ C R C _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ C R C _ I S _ C L K _ D I S A B L E D               _ _ H A L _ R C C _ C R C _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ D A C 1 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ D A C 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ D A C 1 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ D A C 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ D A C 2 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ D A C 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ D A C 2 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ D A C 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ D M A 1 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ D M A 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ D M A 1 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ D M A 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ D M A 2 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ D M A 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ D M A 2 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ D M A 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ F L I T F _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ F L I T F _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ F L I T F _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ F L I T F _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ F M C _ I S _ C L K _ E N A B L E D                 _ _ H A L _ R C C _ F M C _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ F M C _ I S _ C L K _ D I S A B L E D               _ _ H A L _ R C C _ F M C _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O A _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O A _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O A _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O A _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O B _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O B _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O B _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O B _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O C _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O C _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O C _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O C _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O D _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O D _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O D _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O D _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O E _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O E _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O E _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O E _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O F _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O F _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O F _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O F _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O G _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O G _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O G _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O G _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ G P I O H _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ G P I O H _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ G P I O H _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ G P I O H _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ H R T I M 1 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ H R T I M 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ H R T I M 1 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ H R T I M 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ I 2 C 1 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ I 2 C 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ I 2 C 1 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ I 2 C 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ I 2 C 2 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ I 2 C 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ I 2 C 2 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ I 2 C 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ I 2 C 3 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ I 2 C 3 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ I 2 C 3 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ I 2 C 3 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ P W R _ I S _ C L K _ E N A B L E D                 _ _ H A L _ R C C _ P W R _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ P W R _ I S _ C L K _ D I S A B L E D               _ _ H A L _ R C C _ P W R _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S Y S C F G _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ S Y S C F G _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S Y S C F G _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ S Y S C F G _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S P I 1 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ S P I 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S P I 1 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ S P I 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S P I 2 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ S P I 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S P I 2 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ S P I 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S P I 3 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ S P I 3 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S P I 3 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ S P I 3 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S P I 4 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ S P I 4 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S P I 4 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ S P I 4 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S D A D C 1 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ S D A D C 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S D A D C 1 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ S D A D C 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S D A D C 2 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ S D A D C 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S D A D C 2 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ S D A D C 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S D A D C 3 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ S D A D C 3 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S D A D C 3 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ S D A D C 3 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ S R A M _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ S R A M _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ S R A M _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ S R A M _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 2 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 2 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 3 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 3 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 3 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 3 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 4 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 4 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 4 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 4 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 5 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 5 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 5 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 5 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 6 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 6 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 6 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 6 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 7 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 7 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 7 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 7 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 8 _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ T I M 8 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 8 _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ T I M 8 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 2 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 2 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 3 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 3 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 3 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 3 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 4 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 4 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 4 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 4 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 5 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 5 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 5 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 5 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 6 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 6 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 6 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 6 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 7 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 7 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 7 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 7 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 8 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 8 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 8 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 8 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 1 9 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 1 9 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 1 9 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 1 9 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T I M 2 0 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ T I M 2 0 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T I M 2 0 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ T I M 2 0 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ T S C _ I S _ C L K _ E N A B L E D                 _ _ H A L _ R C C _ T S C _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ T S C _ I S _ C L K _ D I S A B L E D               _ _ H A L _ R C C _ T S C _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ U A R T 4 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ U A R T 4 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ U A R T 4 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ U A R T 4 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ U A R T 5 _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ U A R T 5 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ U A R T 5 _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ U A R T 5 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ U S A R T 1 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ U S A R T 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ U S A R T 1 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ U S A R T 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ U S A R T 2 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ U S A R T 2 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ U S A R T 2 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ U S A R T 2 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ U S A R T 3 _ I S _ C L K _ E N A B L E D           _ _ H A L _ R C C _ U S A R T 3 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ U S A R T 3 _ I S _ C L K _ D I S A B L E D         _ _ H A L _ R C C _ U S A R T 3 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ U S B _ I S _ C L K _ E N A B L E D                 _ _ H A L _ R C C _ U S B _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ U S B _ I S _ C L K _ D I S A B L E D               _ _ H A L _ R C C _ U S B _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ W W D G _ I S _ C L K _ E N A B L E D               _ _ H A L _ R C C _ W W D G _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ W W D G _ I S _ C L K _ D I S A B L E D             _ _ H A L _ R C C _ W W D G _ I S _ C L K _ D I S A B L E D 
 
 # i f   d e f i n e d ( S T M 3 2 L 1 ) 
 # d e f i n e   _ _ H A L _ R C C _ C R Y P _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ A E S _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R Y P _ C L K _ E N A B L E                     _ _ H A L _ R C C _ A E S _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R Y P _ C L K _ S L E E P _ D I S A B L E       _ _ H A L _ R C C _ A E S _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R Y P _ C L K _ S L E E P _ E N A B L E         _ _ H A L _ R C C _ A E S _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R Y P _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ A E S _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ C R Y P _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ A E S _ R E L E A S E _ R E S E T 
 # e n d i f   / *   S T M 3 2 L 1   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 4 ) 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ F O R C E _ R E S E T               _ _ H A L _ R C C _ S D I O _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ R E L E A S E _ R E S E T           _ _ H A L _ R C C _ S D I O _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ C L K _ S L E E P _ E N A B L E     _ _ H A L _ R C C _ S D I O _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ C L K _ S L E E P _ D I S A B L E   _ _ H A L _ R C C _ S D I O _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ C L K _ E N A B L E                 _ _ H A L _ R C C _ S D I O _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ C L K _ D I S A B L E               _ _ H A L _ R C C _ S D I O _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ I S _ C L K _ E N A B L E D         _ _ H A L _ R C C _ S D I O _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ I S _ C L K _ D I S A B L E D       _ _ H A L _ R C C _ S D I O _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   S d m m c 1 C l o c k S e l e c t i o n                               S d i o C l o c k S e l e c t i o n 
 # d e f i n e   R C C _ P E R I P H C L K _ S D M M C 1                               R C C _ P E R I P H C L K _ S D I O 
 # d e f i n e   R C C _ S D M M C 1 C L K S O U R C E _ C L K 4 8                     R C C _ S D I O C L K S O U R C E _ C K 4 8 
 # d e f i n e   R C C _ S D M M C 1 C L K S O U R C E _ S Y S C L K                   R C C _ S D I O C L K S O U R C E _ S Y S C L K 
 # d e f i n e   _ _ H A L _ R C C _ S D M M C 1 _ C O N F I G                         _ _ H A L _ R C C _ S D I O _ C O N F I G 
 # d e f i n e   _ _ H A L _ R C C _ G E T _ S D M M C 1 _ S O U R C E                 _ _ H A L _ R C C _ G E T _ S D I O _ S O U R C E 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 L 4 ) 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ F O R C E _ R E S E T                   _ _ H A L _ R C C _ S D M M C 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ R E L E A S E _ R E S E T               _ _ H A L _ R C C _ S D M M C 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ C L K _ S L E E P _ E N A B L E         _ _ H A L _ R C C _ S D M M C 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ C L K _ S L E E P _ D I S A B L E       _ _ H A L _ R C C _ S D M M C 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ C L K _ E N A B L E                     _ _ H A L _ R C C _ S D M M C 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ C L K _ D I S A B L E                   _ _ H A L _ R C C _ S D M M C 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ I S _ C L K _ E N A B L E D             _ _ H A L _ R C C _ S D M M C 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ I S _ C L K _ D I S A B L E D           _ _ H A L _ R C C _ S D M M C 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   S d i o C l o c k S e l e c t i o n                                   S d m m c 1 C l o c k S e l e c t i o n 
 # d e f i n e   R C C _ P E R I P H C L K _ S D I O                                   R C C _ P E R I P H C L K _ S D M M C 1 
 # d e f i n e   _ _ H A L _ R C C _ S D I O _ C O N F I G                             _ _ H A L _ R C C _ S D M M C 1 _ C O N F I G 
 # d e f i n e   _ _ H A L _ R C C _ G E T _ S D I O _ S O U R C E                     _ _ H A L _ R C C _ G E T _ S D M M C 1 _ S O U R C E 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 7 ) 
 # d e f i n e   R C C _ S D I O C L K S O U R C E _ C L K 4 8                           R C C _ S D M M C 1 C L K S O U R C E _ C L K 4 8 
 # d e f i n e   R C C _ S D I O C L K S O U R C E _ S Y S C L K                       R C C _ S D M M C 1 C L K S O U R C E _ S Y S C L K 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ E N A B L E ( )                             _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ C L K _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ E N A B L E ( )                   _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ U L P I _ C L K _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ D I S A B L E ( )                           _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ C L K _ D I S A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ D I S A B L E ( )                 _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ U L P I _ C L K _ D I S A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ F O R C E _ R E S E T ( )                           _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ F O R C E _ R E S E T ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ R E L E A S E _ R E S E T ( )                       _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ R E L E A S E _ R E S E T ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ S L E E P _ E N A B L E ( )                 _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ C L K _ S L E E P _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ S L E E P _ E N A B L E ( )       _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ U L P I _ C L K _ S L E E P _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ C L K _ S L E E P _ D I S A B L E ( )               _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ C L K _ S L E E P _ D I S A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ H S _ U L P I _ C L K _ S L E E P _ D I S A B L E ( )     _ _ H A L _ R C C _ U S B 1 _ O T G _ H S _ U L P I _ C L K _ S L E E P _ D I S A B L E ( ) 
 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ E N A B L E ( )                           _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ C L K _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ U L P I _ C L K _ E N A B L E ( )                 _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ U L P I _ C L K _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ D I S A B L E ( )                         _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ C L K _ D I S A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ U L P I _ C L K _ D I S A B L E ( )               _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ U L P I _ C L K _ D I S A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ F O R C E _ R E S E T ( )                         _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ F O R C E _ R E S E T ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ R E L E A S E _ R E S E T ( )                     _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ R E L E A S E _ R E S E T ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ S L E E P _ E N A B L E ( )               _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ C L K _ S L E E P _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ U L P I _ C L K _ S L E E P _ E N A B L E ( )     _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ U L P I _ C L K _ S L E E P _ E N A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ S L E E P _ D I S A B L E ( )             _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ C L K _ S L E E P _ D I S A B L E ( ) 
 # d e f i n e   _ _ H A L _ R C C _ U S B _ O T G _ F S _ U L P I _ C L K _ S L E E P _ D I S A B L E ( )   _ _ H A L _ R C C _ U S B 2 _ O T G _ F S _ U L P I _ C L K _ S L E E P _ D I S A B L E ( ) 
 # e n d i f 
 
 # d e f i n e   _ _ H A L _ R C C _ I 2 S C L K                         _ _ H A L _ R C C _ I 2 S _ C O N F I G 
 # d e f i n e   _ _ H A L _ R C C _ I 2 S C L K _ C O N F I G           _ _ H A L _ R C C _ I 2 S _ C O N F I G 
 
 # d e f i n e   _ _ R C C _ P L L S R C                                 R C C _ G E T _ P L L _ O S C S O U R C E 
 
 # d e f i n e   I S _ R C C _ M S I R A N G E                           I S _ R C C _ M S I _ C L O C K _ R A N G E 
 # d e f i n e   I S _ R C C _ R T C C L K _ S O U R C E                 I S _ R C C _ R T C C L K S O U R C E 
 # d e f i n e   I S _ R C C _ S Y S C L K _ D I V                       I S _ R C C _ H C L K 
 # d e f i n e   I S _ R C C _ H C L K _ D I V                           I S _ R C C _ P C L K 
 # d e f i n e   I S _ R C C _ P E R I P H C L K                         I S _ R C C _ P E R I P H C L O C K 
 
 # d e f i n e   R C C _ I T _ H S I 1 4                                 R C C _ I T _ H S I 1 4 R D Y 
 
 # d e f i n e   R C C _ I T _ C S S L S E                               R C C _ I T _ L S E C S S 
 # d e f i n e   R C C _ I T _ C S S H S E                               R C C _ I T _ C S S 
 
 # d e f i n e   R C C _ P L L M U L _ 3                                 R C C _ P L L _ M U L 3 
 # d e f i n e   R C C _ P L L M U L _ 4                                 R C C _ P L L _ M U L 4 
 # d e f i n e   R C C _ P L L M U L _ 6                                 R C C _ P L L _ M U L 6 
 # d e f i n e   R C C _ P L L M U L _ 8                                 R C C _ P L L _ M U L 8 
 # d e f i n e   R C C _ P L L M U L _ 1 2                               R C C _ P L L _ M U L 1 2 
 # d e f i n e   R C C _ P L L M U L _ 1 6                               R C C _ P L L _ M U L 1 6 
 # d e f i n e   R C C _ P L L M U L _ 2 4                               R C C _ P L L _ M U L 2 4 
 # d e f i n e   R C C _ P L L M U L _ 3 2                               R C C _ P L L _ M U L 3 2 
 # d e f i n e   R C C _ P L L M U L _ 4 8                               R C C _ P L L _ M U L 4 8 
 
 # d e f i n e   R C C _ P L L D I V _ 2                                 R C C _ P L L _ D I V 2 
 # d e f i n e   R C C _ P L L D I V _ 3                                 R C C _ P L L _ D I V 3 
 # d e f i n e   R C C _ P L L D I V _ 4                                 R C C _ P L L _ D I V 4 
 
 # d e f i n e   I S _ R C C _ M C O S O U R C E                         I S _ R C C _ M C O 1 S O U R C E 
 # d e f i n e   _ _ H A L _ R C C _ M C O _ C O N F I G                 _ _ H A L _ R C C _ M C O 1 _ C O N F I G 
 # d e f i n e   R C C _ M C O _ N O D I V                               R C C _ M C O D I V _ 1 
 # d e f i n e   R C C _ M C O _ D I V 1                                 R C C _ M C O D I V _ 1 
 # d e f i n e   R C C _ M C O _ D I V 2                                 R C C _ M C O D I V _ 2 
 # d e f i n e   R C C _ M C O _ D I V 4                                 R C C _ M C O D I V _ 4 
 # d e f i n e   R C C _ M C O _ D I V 8                                 R C C _ M C O D I V _ 8 
 # d e f i n e   R C C _ M C O _ D I V 1 6                               R C C _ M C O D I V _ 1 6 
 # d e f i n e   R C C _ M C O _ D I V 3 2                               R C C _ M C O D I V _ 3 2 
 # d e f i n e   R C C _ M C O _ D I V 6 4                               R C C _ M C O D I V _ 6 4 
 # d e f i n e   R C C _ M C O _ D I V 1 2 8                             R C C _ M C O D I V _ 1 2 8 
 # d e f i n e   R C C _ M C O S O U R C E _ N O N E                     R C C _ M C O 1 S O U R C E _ N O C L O C K 
 # d e f i n e   R C C _ M C O S O U R C E _ L S I                       R C C _ M C O 1 S O U R C E _ L S I 
 # d e f i n e   R C C _ M C O S O U R C E _ L S E                       R C C _ M C O 1 S O U R C E _ L S E 
 # d e f i n e   R C C _ M C O S O U R C E _ S Y S C L K                 R C C _ M C O 1 S O U R C E _ S Y S C L K 
 # d e f i n e   R C C _ M C O S O U R C E _ H S I                       R C C _ M C O 1 S O U R C E _ H S I 
 # d e f i n e   R C C _ M C O S O U R C E _ H S I 1 4                   R C C _ M C O 1 S O U R C E _ H S I 1 4 
 # d e f i n e   R C C _ M C O S O U R C E _ H S I 4 8                   R C C _ M C O 1 S O U R C E _ H S I 4 8 
 # d e f i n e   R C C _ M C O S O U R C E _ H S E                       R C C _ M C O 1 S O U R C E _ H S E 
 # d e f i n e   R C C _ M C O S O U R C E _ P L L C L K _ D I V 1       R C C _ M C O 1 S O U R C E _ P L L C L K 
 # d e f i n e   R C C _ M C O S O U R C E _ P L L C L K _ N O D I V     R C C _ M C O 1 S O U R C E _ P L L C L K 
 # d e f i n e   R C C _ M C O S O U R C E _ P L L C L K _ D I V 2       R C C _ M C O 1 S O U R C E _ P L L C L K _ D I V 2 
 
 # i f   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 W B )   | |   d e f i n e d ( S T M 3 2 G 0 )   | |   d e f i n e d ( S T M 3 2 G 4 )   | |   d e f i n e d ( S T M 3 2 L 5 )   | |   d e f i n e d ( S T M 3 2 W L ) 
 # d e f i n e   R C C _ R T C C L K S O U R C E _ N O _ C L K           R C C _ R T C C L K S O U R C E _ N O N E 
 # e l s e 
 # d e f i n e   R C C _ R T C C L K S O U R C E _ N O N E               R C C _ R T C C L K S O U R C E _ N O _ C L K 
 # e n d i f 
 
 # d e f i n e   R C C _ U S B C L K _ P L L S A I 1                     R C C _ U S B C L K S O U R C E _ P L L S A I 1 
 # d e f i n e   R C C _ U S B C L K _ P L L                             R C C _ U S B C L K S O U R C E _ P L L 
 # d e f i n e   R C C _ U S B C L K _ M S I                             R C C _ U S B C L K S O U R C E _ M S I 
 # d e f i n e   R C C _ U S B C L K S O U R C E _ P L L C L K           R C C _ U S B C L K S O U R C E _ P L L 
 # d e f i n e   R C C _ U S B P L L C L K _ D I V 1                     R C C _ U S B C L K S O U R C E _ P L L 
 # d e f i n e   R C C _ U S B P L L C L K _ D I V 1 _ 5                 R C C _ U S B C L K S O U R C E _ P L L _ D I V 1 _ 5 
 # d e f i n e   R C C _ U S B P L L C L K _ D I V 2                     R C C _ U S B C L K S O U R C E _ P L L _ D I V 2 
 # d e f i n e   R C C _ U S B P L L C L K _ D I V 3                     R C C _ U S B C L K S O U R C E _ P L L _ D I V 3 
 
 # d e f i n e   H S I O N _ B i t N u m b e r                 R C C _ H S I O N _ B I T _ N U M B E R 
 # d e f i n e   H S I O N _ B I T N U M B E R                 R C C _ H S I O N _ B I T _ N U M B E R 
 # d e f i n e   H S E O N _ B i t N u m b e r                 R C C _ H S E O N _ B I T _ N U M B E R 
 # d e f i n e   H S E O N _ B I T N U M B E R                 R C C _ H S E O N _ B I T _ N U M B E R 
 # d e f i n e   M S I O N _ B I T N U M B E R                 R C C _ M S I O N _ B I T _ N U M B E R 
 # d e f i n e   C S S O N _ B i t N u m b e r                 R C C _ C S S O N _ B I T _ N U M B E R 
 # d e f i n e   C S S O N _ B I T N U M B E R                 R C C _ C S S O N _ B I T _ N U M B E R 
 # d e f i n e   P L L O N _ B i t N u m b e r                 R C C _ P L L O N _ B I T _ N U M B E R 
 # d e f i n e   P L L O N _ B I T N U M B E R                 R C C _ P L L O N _ B I T _ N U M B E R 
 # d e f i n e   P L L I 2 S O N _ B i t N u m b e r           R C C _ P L L I 2 S O N _ B I T _ N U M B E R 
 # d e f i n e   I 2 S S R C _ B i t N u m b e r               R C C _ I 2 S S R C _ B I T _ N U M B E R 
 # d e f i n e   R T C E N _ B i t N u m b e r                 R C C _ R T C E N _ B I T _ N U M B E R 
 # d e f i n e   R T C E N _ B I T N U M B E R                 R C C _ R T C E N _ B I T _ N U M B E R 
 # d e f i n e   B D R S T _ B i t N u m b e r                 R C C _ B D R S T _ B I T _ N U M B E R 
 # d e f i n e   B D R S T _ B I T N U M B E R                 R C C _ B D R S T _ B I T _ N U M B E R 
 # d e f i n e   R T C R S T _ B I T N U M B E R               R C C _ R T C R S T _ B I T _ N U M B E R 
 # d e f i n e   L S I O N _ B i t N u m b e r                 R C C _ L S I O N _ B I T _ N U M B E R 
 # d e f i n e   L S I O N _ B I T N U M B E R                 R C C _ L S I O N _ B I T _ N U M B E R 
 # d e f i n e   L S E O N _ B i t N u m b e r                 R C C _ L S E O N _ B I T _ N U M B E R 
 # d e f i n e   L S E O N _ B I T N U M B E R                 R C C _ L S E O N _ B I T _ N U M B E R 
 # d e f i n e   L S E B Y P _ B I T N U M B E R               R C C _ L S E B Y P _ B I T _ N U M B E R 
 # d e f i n e   P L L S A I O N _ B i t N u m b e r           R C C _ P L L S A I O N _ B I T _ N U M B E R 
 # d e f i n e   T I M P R E _ B i t N u m b e r               R C C _ T I M P R E _ B I T _ N U M B E R 
 # d e f i n e   R M V F _ B i t N u m b e r                   R C C _ R M V F _ B I T _ N U M B E R 
 # d e f i n e   R M V F _ B I T N U M B E R                   R C C _ R M V F _ B I T _ N U M B E R 
 # d e f i n e   R C C _ C R 2 _ H S I 1 4 T R I M _ B i t N u m b e r   R C C _ H S I 1 4 T R I M _ B I T _ N U M B E R 
 # d e f i n e   C R _ B Y T E 2 _ A D D R E S S               R C C _ C R _ B Y T E 2 _ A D D R E S S 
 # d e f i n e   C I R _ B Y T E 1 _ A D D R E S S             R C C _ C I R _ B Y T E 1 _ A D D R E S S 
 # d e f i n e   C I R _ B Y T E 2 _ A D D R E S S             R C C _ C I R _ B Y T E 2 _ A D D R E S S 
 # d e f i n e   B D C R _ B Y T E 0 _ A D D R E S S           R C C _ B D C R _ B Y T E 0 _ A D D R E S S 
 # d e f i n e   D B P _ T I M E O U T _ V A L U E             R C C _ D B P _ T I M E O U T _ V A L U E 
 # d e f i n e   L S E _ T I M E O U T _ V A L U E             R C C _ L S E _ T I M E O U T _ V A L U E 
 
 # d e f i n e   C R _ H S I O N _ B B                         R C C _ C R _ H S I O N _ B B 
 # d e f i n e   C R _ C S S O N _ B B                         R C C _ C R _ C S S O N _ B B 
 # d e f i n e   C R _ P L L O N _ B B                         R C C _ C R _ P L L O N _ B B 
 # d e f i n e   C R _ P L L I 2 S O N _ B B                   R C C _ C R _ P L L I 2 S O N _ B B 
 # d e f i n e   C R _ M S I O N _ B B                         R C C _ C R _ M S I O N _ B B 
 # d e f i n e   C S R _ L S I O N _ B B                       R C C _ C S R _ L S I O N _ B B 
 # d e f i n e   C S R _ L S E O N _ B B                       R C C _ C S R _ L S E O N _ B B 
 # d e f i n e   C S R _ L S E B Y P _ B B                     R C C _ C S R _ L S E B Y P _ B B 
 # d e f i n e   C S R _ R T C E N _ B B                       R C C _ C S R _ R T C E N _ B B 
 # d e f i n e   C S R _ R T C R S T _ B B                     R C C _ C S R _ R T C R S T _ B B 
 # d e f i n e   C F G R _ I 2 S S R C _ B B                   R C C _ C F G R _ I 2 S S R C _ B B 
 # d e f i n e   B D C R _ R T C E N _ B B                     R C C _ B D C R _ R T C E N _ B B 
 # d e f i n e   B D C R _ B D R S T _ B B                     R C C _ B D C R _ B D R S T _ B B 
 # d e f i n e   C R _ H S E O N _ B B                         R C C _ C R _ H S E O N _ B B 
 # d e f i n e   C S R _ R M V F _ B B                         R C C _ C S R _ R M V F _ B B 
 # d e f i n e   C R _ P L L S A I O N _ B B                   R C C _ C R _ P L L S A I O N _ B B 
 # d e f i n e   D C K C F G R _ T I M P R E _ B B             R C C _ D C K C F G R _ T I M P R E _ B B 
 
 # d e f i n e   _ _ H A L _ R C C _ C R S _ E N A B L E _ F R E Q _ E R R O R _ C O U N T E R           _ _ H A L _ R C C _ C R S _ F R E Q _ E R R O R _ C O U N T E R _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R S _ D I S A B L E _ F R E Q _ E R R O R _ C O U N T E R         _ _ H A L _ R C C _ C R S _ F R E Q _ E R R O R _ C O U N T E R _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R S _ E N A B L E _ A U T O M A T I C _ C A L I B                 _ _ H A L _ R C C _ C R S _ A U T O M A T I C _ C A L I B _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R S _ D I S A B L E _ A U T O M A T I C _ C A L I B               _ _ H A L _ R C C _ C R S _ A U T O M A T I C _ C A L I B _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ C R S _ C A L C U L A T E _ R E L O A D V A L U E                   _ _ H A L _ R C C _ C R S _ R E L O A D V A L U E _ C A L C U L A T E 
 
 # d e f i n e   _ _ H A L _ R C C _ G E T _ I T _ S O U R C E                                           _ _ H A L _ R C C _ G E T _ I T 
 
 # d e f i n e   R C C _ C R S _ S Y N C W A R M               R C C _ C R S _ S Y N C W A R N 
 # d e f i n e   R C C _ C R S _ T R I M O V                   R C C _ C R S _ T R I M O V F 
 
 # d e f i n e   R C C _ P E R I P H C L K _ C K 4 8                               R C C _ P E R I P H C L K _ C L K 4 8 
 # d e f i n e   R C C _ C K 4 8 C L K S O U R C E _ P L L Q                       R C C _ C L K 4 8 C L K S O U R C E _ P L L Q 
 # d e f i n e   R C C _ C K 4 8 C L K S O U R C E _ P L L S A I P                 R C C _ C L K 4 8 C L K S O U R C E _ P L L S A I P 
 # d e f i n e   R C C _ C K 4 8 C L K S O U R C E _ P L L I 2 S Q                 R C C _ C L K 4 8 C L K S O U R C E _ P L L I 2 S Q 
 # d e f i n e   I S _ R C C _ C K 4 8 C L K S O U R C E                           I S _ R C C _ C L K 4 8 C L K S O U R C E 
 # d e f i n e   R C C _ S D I O C L K S O U R C E _ C K 4 8                       R C C _ S D I O C L K S O U R C E _ C L K 4 8 
 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ C L K _ E N A B L E                           _ _ H A L _ R C C _ D F S D M 1 _ C L K _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ C L K _ D I S A B L E                         _ _ H A L _ R C C _ D F S D M 1 _ C L K _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ I S _ C L K _ E N A B L E D                   _ _ H A L _ R C C _ D F S D M 1 _ I S _ C L K _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ I S _ C L K _ D I S A B L E D                 _ _ H A L _ R C C _ D F S D M 1 _ I S _ C L K _ D I S A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ F O R C E _ R E S E T                         _ _ H A L _ R C C _ D F S D M 1 _ F O R C E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ R E L E A S E _ R E S E T                     _ _ H A L _ R C C _ D F S D M 1 _ R E L E A S E _ R E S E T 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ C L K _ S L E E P _ E N A B L E               _ _ H A L _ R C C _ D F S D M 1 _ C L K _ S L E E P _ E N A B L E 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ C L K _ S L E E P _ D I S A B L E             _ _ H A L _ R C C _ D F S D M 1 _ C L K _ S L E E P _ D I S A B L E 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ I S _ C L K _ S L E E P _ E N A B L E D       _ _ H A L _ R C C _ D F S D M 1 _ I S _ C L K _ S L E E P _ E N A B L E D 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ I S _ C L K _ S L E E P _ D I S A B L E D     _ _ H A L _ R C C _ D F S D M 1 _ I S _ C L K _ S L E E P _ D I S A B L E D 
 # d e f i n e   D f s d m C l o c k S e l e c t i o n                   D f s d m 1 C l o c k S e l e c t i o n 
 # d e f i n e   R C C _ P E R I P H C L K _ D F S D M                   R C C _ P E R I P H C L K _ D F S D M 1 
 # d e f i n e   R C C _ D F S D M C L K S O U R C E _ P C L K           R C C _ D F S D M 1 C L K S O U R C E _ P C L K 2 
 # d e f i n e   R C C _ D F S D M C L K S O U R C E _ S Y S C L K       R C C _ D F S D M 1 C L K S O U R C E _ S Y S C L K 
 # d e f i n e   _ _ H A L _ R C C _ D F S D M _ C O N F I G             _ _ H A L _ R C C _ D F S D M 1 _ C O N F I G 
 # d e f i n e   _ _ H A L _ R C C _ G E T _ D F S D M _ S O U R C E     _ _ H A L _ R C C _ G E T _ D F S D M 1 _ S O U R C E 
 # d e f i n e   R C C _ D F S D M 1 C L K S O U R C E _ P C L K         R C C _ D F S D M 1 C L K S O U R C E _ P C L K 2 
 # d e f i n e   R C C _ S W P M I 1 C L K S O U R C E _ P C L K         R C C _ S W P M I 1 C L K S O U R C E _ P C L K 1 
 # d e f i n e   R C C _ L P T I M 1 C L K S O U R C E _ P C L K         R C C _ L P T I M 1 C L K S O U R C E _ P C L K 1 
 # d e f i n e   R C C _ L P T I M 2 C L K S O U R C E _ P C L K         R C C _ L P T I M 2 C L K S O U R C E _ P C L K 1 
 
 # d e f i n e   R C C _ D F S D M 1 A U D I O C L K S O U R C E _ I 2 S A P B 1         R C C _ D F S D M 1 A U D I O C L K S O U R C E _ I 2 S 1 
 # d e f i n e   R C C _ D F S D M 1 A U D I O C L K S O U R C E _ I 2 S A P B 2         R C C _ D F S D M 1 A U D I O C L K S O U R C E _ I 2 S 2 
 # d e f i n e   R C C _ D F S D M 2 A U D I O C L K S O U R C E _ I 2 S A P B 1         R C C _ D F S D M 2 A U D I O C L K S O U R C E _ I 2 S 1 
 # d e f i n e   R C C _ D F S D M 2 A U D I O C L K S O U R C E _ I 2 S A P B 2         R C C _ D F S D M 2 A U D I O C L K S O U R C E _ I 2 S 2 
 # d e f i n e   R C C _ D F S D M 1 C L K S O U R C E _ A P B 2                         R C C _ D F S D M 1 C L K S O U R C E _ P C L K 2 
 # d e f i n e   R C C _ D F S D M 2 C L K S O U R C E _ A P B 2                         R C C _ D F S D M 2 C L K S O U R C E _ P C L K 2 
 # d e f i n e   R C C _ F M P I 2 C 1 C L K S O U R C E _ A P B                         R C C _ F M P I 2 C 1 C L K S O U R C E _ P C L K 1 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ R N G _ A l i a s e d _ M a c r o s   H A L   R N G   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e     H A L _ R N G _ R e a d y C a l l b a c k ( _ _ H A N D L E _ _ )     H A L _ R N G _ R e a d y D a t a C a l l b a c k ( ( _ _ H A N D L E _ _ ) ,   u i n t 3 2 _ t   r a n d o m 3 2 b i t ) 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ R T C _ A l i a s e d _ M a c r o s   H A L   R T C   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # i f   d e f i n e d   ( S T M 3 2 G 0 )   | |   d e f i n e d   ( S T M 3 2 L 5 )   | |   d e f i n e d   ( S T M 3 2 L 4 1 2 x x )   | |   d e f i n e d   ( S T M 3 2 L 4 2 2 x x )   | |   d e f i n e d   ( S T M 3 2 L 4 P 5 x x )   | |   d e f i n e d   ( S T M 3 2 L 4 Q 5 x x )   | |   d e f i n e d   ( S T M 3 2 G 4 )   | |   d e f i n e d   ( S T M 3 2 W L ) 
 # e l s e 
 # d e f i n e   _ _ H A L _ R T C _ C L E A R _ F L A G                                             _ _ H A L _ R T C _ E X T I _ C L E A R _ F L A G 
 # e n d i f 
 # d e f i n e   _ _ H A L _ R T C _ D I S A B L E _ I T                                             _ _ H A L _ R T C _ E X T I _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ R T C _ E N A B L E _ I T                                               _ _ H A L _ R T C _ E X T I _ E N A B L E _ I T 
 
 # i f   d e f i n e d   ( S T M 3 2 F 1 ) 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ C L E A R _ F L A G ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )     _ _ H A L _ R T C _ A L A R M _ E X T I _ C L E A R _ F L A G ( ) 
 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ E N A B L E _ I T ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )       _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ I T ( ) 
 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ D I S A B L E _ I T ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )     _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ I T ( ) 
 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ G E T _ F L A G ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )         _ _ H A L _ R T C _ A L A R M _ E X T I _ G E T _ F L A G ( ) 
 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ G E N E R A T E _ S W I T ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )       _ _ H A L _ R T C _ A L A R M _ E X T I _ G E N E R A T E _ S W I T ( ) 
 # e l s e 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ C L E A R _ F L A G ( _ _ E X T I _ L I N E _ _ )     ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )   ?   _ _ H A L _ R T C _ A L A R M _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                       ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ W A K E U P T I M E R _ E V E N T )   ?   _ _ H A L _ R T C _ W A K E U P T I M E R _ E X T I _ C L E A R _ F L A G ( )   :   \ 
                                                                                                             _ _ H A L _ R T C _ T A M P E R _ T I M E S T A M P _ E X T I _ C L E A R _ F L A G ( ) ) ) 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ E N A B L E _ I T ( _ _ E X T I _ L I N E _ _ )       ( ( ( _ _ E X T I _ L I N E _ _ )     = =   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )   ?   _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                     ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ W A K E U P T I M E R _ E V E N T )   ?   _ _ H A L _ R T C _ W A K E U P T I M E R _ E X T I _ E N A B L E _ I T ( )   :   \ 
                                                                                                             _ _ H A L _ R T C _ T A M P E R _ T I M E S T A M P _ E X T I _ E N A B L E _ I T ( ) ) ) 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ D I S A B L E _ I T ( _ _ E X T I _ L I N E _ _ )     ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )   ?   _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                     ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ W A K E U P T I M E R _ E V E N T )   ?   _ _ H A L _ R T C _ W A K E U P T I M E R _ E X T I _ D I S A B L E _ I T ( )   :   \ 
                                                                                                             _ _ H A L _ R T C _ T A M P E R _ T I M E S T A M P _ E X T I _ D I S A B L E _ I T ( ) ) ) 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ G E T _ F L A G ( _ _ E X T I _ L I N E _ _ )         ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )   ?   _ _ H A L _ R T C _ A L A R M _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                     ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ W A K E U P T I M E R _ E V E N T )   ?   _ _ H A L _ R T C _ W A K E U P T I M E R _ E X T I _ G E T _ F L A G ( )   :   \ 
                                                                                                             _ _ H A L _ R T C _ T A M P E R _ T I M E S T A M P _ E X T I _ G E T _ F L A G ( ) ) ) 
 # d e f i n e   _ _ H A L _ R T C _ E X T I _ G E N E R A T E _ S W I T ( _ _ E X T I _ L I N E _ _ )       ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )   ?   _ _ H A L _ R T C _ A L A R M _ E X T I _ G E N E R A T E _ S W I T ( )   :   \ 
                                                                                                             ( ( ( _ _ E X T I _ L I N E _ _ )   = =   R T C _ E X T I _ L I N E _ W A K E U P T I M E R _ E V E N T )   ?   _ _ H A L _ R T C _ W A K E U P T I M E R _ E X T I _ G E N E R A T E _ S W I T ( )   :     \ 
                                                                                                                     _ _ H A L _ R T C _ T A M P E R _ T I M E S T A M P _ E X T I _ G E N E R A T E _ S W I T ( ) ) ) 
 # e n d i f       / *   S T M 3 2 F 1   * / 
 
 # d e f i n e   I S _ A L A R M                                                                     I S _ R T C _ A L A R M 
 # d e f i n e   I S _ A L A R M _ M A S K                                                           I S _ R T C _ A L A R M _ M A S K 
 # d e f i n e   I S _ T A M P E R                                                                   I S _ R T C _ T A M P E R 
 # d e f i n e   I S _ T A M P E R _ E R A S E _ M O D E                                             I S _ R T C _ T A M P E R _ E R A S E _ M O D E 
 # d e f i n e   I S _ T A M P E R _ F I L T E R                                                     I S _ R T C _ T A M P E R _ F I L T E R 
 # d e f i n e   I S _ T A M P E R _ I N T E R R U P T                                               I S _ R T C _ T A M P E R _ I N T E R R U P T 
 # d e f i n e   I S _ T A M P E R _ M A S K F L A G _ S T A T E                                     I S _ R T C _ T A M P E R _ M A S K F L A G _ S T A T E 
 # d e f i n e   I S _ T A M P E R _ P R E C H A R G E _ D U R A T I O N                             I S _ R T C _ T A M P E R _ P R E C H A R G E _ D U R A T I O N 
 # d e f i n e   I S _ T A M P E R _ P U L L U P _ S T A T E                                         I S _ R T C _ T A M P E R _ P U L L U P _ S T A T E 
 # d e f i n e   I S _ T A M P E R _ S A M P L I N G _ F R E Q                                       I S _ R T C _ T A M P E R _ S A M P L I N G _ F R E Q 
 # d e f i n e   I S _ T A M P E R _ T I M E S T A M P O N T A M P E R _ D E T E C T I O N           I S _ R T C _ T A M P E R _ T I M E S T A M P O N T A M P E R _ D E T E C T I O N 
 # d e f i n e   I S _ T A M P E R _ T R I G G E R                                                   I S _ R T C _ T A M P E R _ T R I G G E R 
 # d e f i n e   I S _ W A K E U P _ C L O C K                                                       I S _ R T C _ W A K E U P _ C L O C K 
 # d e f i n e   I S _ W A K E U P _ C O U N T E R                                                   I S _ R T C _ W A K E U P _ C O U N T E R 
 
 # d e f i n e   _ _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E 
 # d e f i n e   _ _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S D _ A l i a s e d _ M a c r o s   H A L   S D   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   S D _ O C R _ C I D _ C S D _ O V E R W R I E T E       S D _ O C R _ C I D _ C S D _ O V E R W R I T E 
 # d e f i n e   S D _ C M D _ S D _ A P P _ S T A U S                   S D _ C M D _ S D _ A P P _ S T A T U S 
 
 # i f   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 2 ) 
 # d e f i n e     S D _ S D M M C _ D I S A B L E D                     S D _ S D I O _ D I S A B L E D 
 # d e f i n e     S D _ S D M M C _ F U N C T I O N _ B U S Y           S D _ S D I O _ F U N C T I O N _ B U S Y 
 # d e f i n e     S D _ S D M M C _ F U N C T I O N _ F A I L E D       S D _ S D I O _ F U N C T I O N _ F A I L E D 
 # d e f i n e     S D _ S D M M C _ U N K N O W N _ F U N C T I O N     S D _ S D I O _ U N K N O W N _ F U N C T I O N 
 # d e f i n e     S D _ C M D _ S D M M C _ S E N _ O P _ C O N D       S D _ C M D _ S D I O _ S E N _ O P _ C O N D 
 # d e f i n e     S D _ C M D _ S D M M C _ R W _ D I R E C T           S D _ C M D _ S D I O _ R W _ D I R E C T 
 # d e f i n e     S D _ C M D _ S D M M C _ R W _ E X T E N D E D       S D _ C M D _ S D I O _ R W _ E X T E N D E D 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ E N A B L E             _ _ H A L _ S D _ S D I O _ E N A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ D I S A B L E           _ _ H A L _ S D _ S D I O _ D I S A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ D M A _ E N A B L E     _ _ H A L _ S D _ S D I O _ D M A _ E N A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ D M A _ D I S A B L E   _ _ H A L _ S D _ S D I O _ D M A _ D I S A B L 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ E N A B L E _ I T       _ _ H A L _ S D _ S D I O _ E N A B L E _ I T 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ D I S A B L E _ I T     _ _ H A L _ S D _ S D I O _ D I S A B L E _ I T 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ G E T _ F L A G         _ _ H A L _ S D _ S D I O _ G E T _ F L A G 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ C L E A R _ F L A G     _ _ H A L _ S D _ S D I O _ C L E A R _ F L A G 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ G E T _ I T             _ _ H A L _ S D _ S D I O _ G E T _ I T 
 # d e f i n e     _ _ H A L _ S D _ S D M M C _ C L E A R _ I T         _ _ H A L _ S D _ S D I O _ C L E A R _ I T 
 # d e f i n e     S D M M C _ S T A T I C _ F L A G S                   S D I O _ S T A T I C _ F L A G S 
 # d e f i n e     S D M M C _ C M D 0 T I M E O U T                     S D I O _ C M D 0 T I M E O U T 
 # d e f i n e     S D _ S D M M C _ S E N D _ I F _ C O N D             S D _ S D I O _ S E N D _ I F _ C O N D 
 / *   a l i a s   C M S I S   * / 
 # d e f i n e     S D M M C 1 _ I R Q n                                 S D I O _ I R Q n 
 # d e f i n e     S D M M C 1 _ I R Q H a n d l e r                     S D I O _ I R Q H a n d l e r 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 L 4 ) 
 # d e f i n e     S D _ S D I O _ D I S A B L E D                       S D _ S D M M C _ D I S A B L E D 
 # d e f i n e     S D _ S D I O _ F U N C T I O N _ B U S Y             S D _ S D M M C _ F U N C T I O N _ B U S Y 
 # d e f i n e     S D _ S D I O _ F U N C T I O N _ F A I L E D         S D _ S D M M C _ F U N C T I O N _ F A I L E D 
 # d e f i n e     S D _ S D I O _ U N K N O W N _ F U N C T I O N       S D _ S D M M C _ U N K N O W N _ F U N C T I O N 
 # d e f i n e     S D _ C M D _ S D I O _ S E N _ O P _ C O N D         S D _ C M D _ S D M M C _ S E N _ O P _ C O N D 
 # d e f i n e     S D _ C M D _ S D I O _ R W _ D I R E C T             S D _ C M D _ S D M M C _ R W _ D I R E C T 
 # d e f i n e     S D _ C M D _ S D I O _ R W _ E X T E N D E D         S D _ C M D _ S D M M C _ R W _ E X T E N D E D 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ E N A B L E               _ _ H A L _ S D _ S D M M C _ E N A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ D I S A B L E             _ _ H A L _ S D _ S D M M C _ D I S A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ D M A _ E N A B L E       _ _ H A L _ S D _ S D M M C _ D M A _ E N A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ D M A _ D I S A B L       _ _ H A L _ S D _ S D M M C _ D M A _ D I S A B L E 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ E N A B L E _ I T         _ _ H A L _ S D _ S D M M C _ E N A B L E _ I T 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ D I S A B L E _ I T       _ _ H A L _ S D _ S D M M C _ D I S A B L E _ I T 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ G E T _ F L A G           _ _ H A L _ S D _ S D M M C _ G E T _ F L A G 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ C L E A R _ F L A G       _ _ H A L _ S D _ S D M M C _ C L E A R _ F L A G 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ G E T _ I T               _ _ H A L _ S D _ S D M M C _ G E T _ I T 
 # d e f i n e     _ _ H A L _ S D _ S D I O _ C L E A R _ I T           _ _ H A L _ S D _ S D M M C _ C L E A R _ I T 
 # d e f i n e     S D I O _ S T A T I C _ F L A G S                     S D M M C _ S T A T I C _ F L A G S 
 # d e f i n e     S D I O _ C M D 0 T I M E O U T                       S D M M C _ C M D 0 T I M E O U T 
 # d e f i n e     S D _ S D I O _ S E N D _ I F _ C O N D               S D _ S D M M C _ S E N D _ I F _ C O N D 
 / *   a l i a s   C M S I S   f o r   c o m p a t i b i l i t i e s   * / 
 # d e f i n e     S D I O _ I R Q n                                     S D M M C 1 _ I R Q n 
 # d e f i n e     S D I O _ I R Q H a n d l e r                         S D M M C 1 _ I R Q H a n d l e r 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 F 4 )   | |   d e f i n e d ( S T M 3 2 F 2 )   | |   d e f i n e d ( S T M 3 2 L 4 )   | |   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e     H A L _ S D _ C a r d C I D T y p e d e f               H A L _ S D _ C a r d C I D T y p e D e f 
 # d e f i n e     H A L _ S D _ C a r d C S D T y p e d e f               H A L _ S D _ C a r d C S D T y p e D e f 
 # d e f i n e     H A L _ S D _ C a r d S t a t u s T y p e d e f         H A L _ S D _ C a r d S t a t u s T y p e D e f 
 # d e f i n e     H A L _ S D _ C a r d S t a t e T y p e d e f           H A L _ S D _ C a r d S t a t e T y p e D e f 
 # e n d i f 
 
 # i f   d e f i n e d ( S T M 3 2 H 7 )   | |   d e f i n e d ( S T M 3 2 L 5 ) 
 # d e f i n e   H A L _ M M C E x _ R e a d _ D M A D o u b l e B u f f e r 0 C p l t C a l l b a c k       H A L _ M M C E x _ R e a d _ D M A D o u b l e B u f 0 C p l t C a l l b a c k 
 # d e f i n e   H A L _ M M C E x _ R e a d _ D M A D o u b l e B u f f e r 1 C p l t C a l l b a c k       H A L _ M M C E x _ R e a d _ D M A D o u b l e B u f 1 C p l t C a l l b a c k 
 # d e f i n e   H A L _ M M C E x _ W r i t e _ D M A D o u b l e B u f f e r 0 C p l t C a l l b a c k     H A L _ M M C E x _ W r i t e _ D M A D o u b l e B u f 0 C p l t C a l l b a c k 
 # d e f i n e   H A L _ M M C E x _ W r i t e _ D M A D o u b l e B u f f e r 1 C p l t C a l l b a c k     H A L _ M M C E x _ W r i t e _ D M A D o u b l e B u f 1 C p l t C a l l b a c k 
 # d e f i n e   H A L _ S D E x _ R e a d _ D M A D o u b l e B u f f e r 0 C p l t C a l l b a c k         H A L _ S D E x _ R e a d _ D M A D o u b l e B u f 0 C p l t C a l l b a c k 
 # d e f i n e   H A L _ S D E x _ R e a d _ D M A D o u b l e B u f f e r 1 C p l t C a l l b a c k         H A L _ S D E x _ R e a d _ D M A D o u b l e B u f 1 C p l t C a l l b a c k 
 # d e f i n e   H A L _ S D E x _ W r i t e _ D M A D o u b l e B u f f e r 0 C p l t C a l l b a c k       H A L _ S D E x _ W r i t e _ D M A D o u b l e B u f 0 C p l t C a l l b a c k 
 # d e f i n e   H A L _ S D E x _ W r i t e _ D M A D o u b l e B u f f e r 1 C p l t C a l l b a c k       H A L _ S D E x _ W r i t e _ D M A D o u b l e B u f 1 C p l t C a l l b a c k 
 # d e f i n e   H A L _ S D _ D r i v e T r a n s c i v e r _ 1 _ 8 V _ C a l l b a c k                     H A L _ S D _ D r i v e T r a n s c e i v e r _ 1 _ 8 V _ C a l l b a c k 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S M A R T C A R D _ A l i a s e d _ M a c r o s   H A L   S M A R T C A R D   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ S M A R T C A R D _ E N A B L E _ I T                       _ _ H A L _ S M A R T C A R D _ E N A B L E _ I T 
 # d e f i n e   _ _ S M A R T C A R D _ D I S A B L E _ I T                     _ _ H A L _ S M A R T C A R D _ D I S A B L E _ I T 
 # d e f i n e   _ _ S M A R T C A R D _ E N A B L E                             _ _ H A L _ S M A R T C A R D _ E N A B L E 
 # d e f i n e   _ _ S M A R T C A R D _ D I S A B L E                           _ _ H A L _ S M A R T C A R D _ D I S A B L E 
 # d e f i n e   _ _ S M A R T C A R D _ D M A _ R E Q U E S T _ E N A B L E     _ _ H A L _ S M A R T C A R D _ D M A _ R E Q U E S T _ E N A B L E 
 # d e f i n e   _ _ S M A R T C A R D _ D M A _ R E Q U E S T _ D I S A B L E   _ _ H A L _ S M A R T C A R D _ D M A _ R E Q U E S T _ D I S A B L E 
 
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ G E T C L O C K S O U R C E     S M A R T C A R D _ G E T C L O C K S O U R C E 
 # d e f i n e   _ _ S M A R T C A R D _ G E T C L O C K S O U R C E             S M A R T C A R D _ G E T C L O C K S O U R C E 
 
 # d e f i n e   I S _ S M A R T C A R D _ O N E B I T _ S A M P L I N G         I S _ S M A R T C A R D _ O N E _ B I T _ S A M P L E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S M B U S _ A l i a s e d _ M a c r o s   H A L   S M B U S   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ S M B U S _ R E S E T _ C R 1                       S M B U S _ R E S E T _ C R 1 
 # d e f i n e   _ _ H A L _ S M B U S _ R E S E T _ C R 2                       S M B U S _ R E S E T _ C R 2 
 # d e f i n e   _ _ H A L _ S M B U S _ G E N E R A T E _ S T A R T             S M B U S _ G E N E R A T E _ S T A R T 
 # d e f i n e   _ _ H A L _ S M B U S _ G E T _ A D D R _ M A T C H             S M B U S _ G E T _ A D D R _ M A T C H 
 # d e f i n e   _ _ H A L _ S M B U S _ G E T _ D I R                           S M B U S _ G E T _ D I R 
 # d e f i n e   _ _ H A L _ S M B U S _ G E T _ S T O P _ M O D E               S M B U S _ G E T _ S T O P _ M O D E 
 # d e f i n e   _ _ H A L _ S M B U S _ G E T _ P E C _ M O D E                 S M B U S _ G E T _ P E C _ M O D E 
 # d e f i n e   _ _ H A L _ S M B U S _ G E T _ A L E R T _ E N A B L E D       S M B U S _ G E T _ A L E R T _ E N A B L E D 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S P I _ A l i a s e d _ M a c r o s   H A L   S P I   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ H A L _ S P I _ 1 L I N E _ T X                             S P I _ 1 L I N E _ T X 
 # d e f i n e   _ _ H A L _ S P I _ 1 L I N E _ R X                             S P I _ 1 L I N E _ R X 
 # d e f i n e   _ _ H A L _ S P I _ R E S E T _ C R C                           S P I _ R E S E T _ C R C 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ U A R T _ A l i a s e d _ M a c r o s   H A L   U A R T   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ H A L _ U A R T _ G E T C L O C K S O U R C E               U A R T _ G E T C L O C K S O U R C E 
 # d e f i n e   _ _ H A L _ U A R T _ M A S K _ C O M P U T A T I O N           U A R T _ M A S K _ C O M P U T A T I O N 
 # d e f i n e   _ _ U A R T _ G E T C L O C K S O U R C E                       U A R T _ G E T C L O C K S O U R C E 
 # d e f i n e   _ _ U A R T _ M A S K _ C O M P U T A T I O N                   U A R T _ M A S K _ C O M P U T A T I O N 
 
 # d e f i n e   I S _ U A R T _ W A K E U P M E T H O D E                       I S _ U A R T _ W A K E U P M E T H O D 
 
 # d e f i n e   I S _ U A R T _ O N E B I T _ S A M P L E                       I S _ U A R T _ O N E _ B I T _ S A M P L E 
 # d e f i n e   I S _ U A R T _ O N E B I T _ S A M P L I N G                   I S _ U A R T _ O N E _ B I T _ S A M P L E 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   H A L _ U S A R T _ A l i a s e d _ M a c r o s   H A L   U S A R T   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ U S A R T _ E N A B L E _ I T                               _ _ H A L _ U S A R T _ E N A B L E _ I T 
 # d e f i n e   _ _ U S A R T _ D I S A B L E _ I T                             _ _ H A L _ U S A R T _ D I S A B L E _ I T 
 # d e f i n e   _ _ U S A R T _ E N A B L E                                     _ _ H A L _ U S A R T _ E N A B L E 
 # d e f i n e   _ _ U S A R T _ D I S A B L E                                   _ _ H A L _ U S A R T _ D I S A B L E 
 
 # d e f i n e   _ _ H A L _ U S A R T _ G E T C L O C K S O U R C E             U S A R T _ G E T C L O C K S O U R C E 
 # d e f i n e   _ _ U S A R T _ G E T C L O C K S O U R C E                     U S A R T _ G E T C L O C K S O U R C E 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ U S B _ A l i a s e d _ M a c r o s   H A L   U S B   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   U S B _ E X T I _ L I N E _ W A K E U P                                                               U S B _ W A K E U P _ E X T I _ L I N E 
 
 # d e f i n e   U S B _ F S _ E X T I _ T R I G G E R _ R I S I N G _ E D G E                                         U S B _ O T G _ F S _ W A K E U P _ E X T I _ R I S I N G _ E D G E 
 # d e f i n e   U S B _ F S _ E X T I _ T R I G G E R _ F A L L I N G _ E D G E                                       U S B _ O T G _ F S _ W A K E U P _ E X T I _ F A L L I N G _ E D G E 
 # d e f i n e   U S B _ F S _ E X T I _ T R I G G E R _ B O T H _ E D G E                                             U S B _ O T G _ F S _ W A K E U P _ E X T I _ R I S I N G _ F A L L I N G _ E D G E 
 # d e f i n e   U S B _ F S _ E X T I _ L I N E _ W A K E U P                                                         U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E 
 
 # d e f i n e   U S B _ H S _ E X T I _ T R I G G E R _ R I S I N G _ E D G E                                         U S B _ O T G _ H S _ W A K E U P _ E X T I _ R I S I N G _ E D G E 
 # d e f i n e   U S B _ H S _ E X T I _ T R I G G E R _ F A L L I N G _ E D G E                                       U S B _ O T G _ H S _ W A K E U P _ E X T I _ F A L L I N G _ E D G E 
 # d e f i n e   U S B _ H S _ E X T I _ T R I G G E R _ B O T H _ E D G E                                             U S B _ O T G _ H S _ W A K E U P _ E X T I _ R I S I N G _ F A L L I N G _ E D G E 
 # d e f i n e   U S B _ H S _ E X T I _ L I N E _ W A K E U P                                                         U S B _ O T G _ H S _ W A K E U P _ E X T I _ L I N E 
 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ E N A B L E _ I T                                                       _ _ H A L _ U S B _ W A K E U P _ E X T I _ E N A B L E _ I T 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ D I S A B L E _ I T                                                     _ _ H A L _ U S B _ W A K E U P _ E X T I _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ G E T _ F L A G                                                         _ _ H A L _ U S B _ W A K E U P _ E X T I _ G E T _ F L A G 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ C L E A R _ F L A G                                                     _ _ H A L _ U S B _ W A K E U P _ E X T I _ C L E A R _ F L A G 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ S E T _ R I S I N G _ E D G E _ T R I G G E R                           _ _ H A L _ U S B _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ S E T _ F A L L I N G _ E D G E _ T R I G G E R                         _ _ H A L _ U S B _ W A K E U P _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ E X T I _ S E T _ F A L L I N G R I S I N G _ T R I G G E R                       _ _ H A L _ U S B _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ F A L L I N G _ E D G E 
 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ E N A B L E _ I T                                                 _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ E N A B L E _ I T 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ D I S A B L E _ I T                                               _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ G E T _ F L A G                                                   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ G E T _ F L A G 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ C L E A R _ F L A G                                               _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ C L E A R _ F L A G 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ S E T _ R I S I N G _ E G D E _ T R I G G E R                     _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ S E T _ F A L L I N G _ E G D E _ T R I G G E R                   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ S E T _ F A L L I N G R I S I N G _ T R I G G E R                 _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ F S _ E X T I _ G E N E R A T E _ S W I T                                         _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ G E N E R A T E _ S W I T 
 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ E N A B L E _ I T                                                 _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ E N A B L E _ I T 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ D I S A B L E _ I T                                               _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ G E T _ F L A G                                                   _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ G E T _ F L A G 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ C L E A R _ F L A G                                               _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ C L E A R _ F L A G 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ S E T _ R I S I N G _ E G D E _ T R I G G E R                     _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ S E T _ F A L L I N G _ E G D E _ T R I G G E R                   _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ E N A B L E _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ S E T _ F A L L I N G R I S I N G _ T R I G G E R                 _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ F A L L I N G _ E D G E 
 # d e f i n e   _ _ H A L _ U S B _ H S _ E X T I _ G E N E R A T E _ S W I T                                         _ _ H A L _ U S B _ O T G _ H S _ W A K E U P _ E X T I _ G E N E R A T E _ S W I T 
 
 # d e f i n e   H A L _ P C D _ A c t i v e R e m o t e W a k e u p                                                   H A L _ P C D _ A c t i v a t e R e m o t e W a k e u p 
 # d e f i n e   H A L _ P C D _ D e A c t i v e R e m o t e W a k e u p                                               H A L _ P C D _ D e A c t i v a t e R e m o t e W a k e u p 
 
 # d e f i n e   H A L _ P C D _ S e t T x F i F o                                                                     H A L _ P C D E x _ S e t T x F i F o 
 # d e f i n e   H A L _ P C D _ S e t R x F i F o                                                                     H A L _ P C D E x _ S e t R x F i F o 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ T I M _ A l i a s e d _ M a c r o s   H A L   T I M   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ T I M _ S e t I C P r e s c a l e r V a l u e       T I M _ S E T _ I C P R E S C A L E R V A L U E 
 # d e f i n e   _ _ H A L _ T I M _ R e s e t I C P r e s c a l e r V a l u e   T I M _ R E S E T _ I C P R E S C A L E R V A L U E 
 
 # d e f i n e   T I M _ G E T _ I T S T A T U S                                 _ _ H A L _ T I M _ G E T _ I T _ S O U R C E 
 # d e f i n e   T I M _ G E T _ C L E A R _ I T                                 _ _ H A L _ T I M _ C L E A R _ I T 
 
 # d e f i n e   _ _ H A L _ T I M _ G E T _ I T S T A T U S                     _ _ H A L _ T I M _ G E T _ I T _ S O U R C E 
 
 # d e f i n e   _ _ H A L _ T I M _ D I R E C T I O N _ S T A T U S             _ _ H A L _ T I M _ I S _ T I M _ C O U N T I N G _ D O W N 
 # d e f i n e   _ _ H A L _ T I M _ P R E S C A L E R                           _ _ H A L _ T I M _ S E T _ P R E S C A L E R 
 # d e f i n e   _ _ H A L _ T I M _ S e t C o u n t e r                         _ _ H A L _ T I M _ S E T _ C O U N T E R 
 # d e f i n e   _ _ H A L _ T I M _ G e t C o u n t e r                         _ _ H A L _ T I M _ G E T _ C O U N T E R 
 # d e f i n e   _ _ H A L _ T I M _ S e t A u t o r e l o a d                   _ _ H A L _ T I M _ S E T _ A U T O R E L O A D 
 # d e f i n e   _ _ H A L _ T I M _ G e t A u t o r e l o a d                   _ _ H A L _ T I M _ G E T _ A U T O R E L O A D 
 # d e f i n e   _ _ H A L _ T I M _ S e t C l o c k D i v i s i o n             _ _ H A L _ T I M _ S E T _ C L O C K D I V I S I O N 
 # d e f i n e   _ _ H A L _ T I M _ G e t C l o c k D i v i s i o n             _ _ H A L _ T I M _ G E T _ C L O C K D I V I S I O N 
 # d e f i n e   _ _ H A L _ T I M _ S e t I C P r e s c a l e r                 _ _ H A L _ T I M _ S E T _ I C P R E S C A L E R 
 # d e f i n e   _ _ H A L _ T I M _ G e t I C P r e s c a l e r                 _ _ H A L _ T I M _ G E T _ I C P R E S C A L E R 
 # d e f i n e   _ _ H A L _ T I M _ S e t C o m p a r e                         _ _ H A L _ T I M _ S E T _ C O M P A R E 
 # d e f i n e   _ _ H A L _ T I M _ G e t C o m p a r e                         _ _ H A L _ T I M _ G E T _ C O M P A R E 
 
 # d e f i n e   T I M _ B R E A K I N P U T S O U R C E _ D F S D M     T I M _ B R E A K I N P U T S O U R C E _ D F S D M 1 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ E T H _ A l i a s e d _ M a c r o s   H A L   E T H   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ E N A B L E _ I T                                       _ _ H A L _ E T H _ W A K E U P _ E X T I _ E N A B L E _ I T 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ D I S A B L E _ I T                                     _ _ H A L _ E T H _ W A K E U P _ E X T I _ D I S A B L E _ I T 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ G E T _ F L A G                                         _ _ H A L _ E T H _ W A K E U P _ E X T I _ G E T _ F L A G 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ C L E A R _ F L A G                                     _ _ H A L _ E T H _ W A K E U P _ E X T I _ C L E A R _ F L A G 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ S E T _ R I S I N G _ E G D E _ T R I G G E R           _ _ H A L _ E T H _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ E D G E _ T R I G G E R 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ S E T _ F A L L I N G _ E G D E _ T R I G G E R         _ _ H A L _ E T H _ W A K E U P _ E X T I _ E N A B L E _ F A L L I N G _ E D G E _ T R I G G E R 
 # d e f i n e   _ _ H A L _ E T H _ E X T I _ S E T _ F A L L I N G R I S I N G _ T R I G G E R       _ _ H A L _ E T H _ W A K E U P _ E X T I _ E N A B L E _ F A L L I N G R I S I N G _ T R I G G E R 
 
 # d e f i n e   E T H _ P R O M I S C I O U S M O D E _ E N A B L E       E T H _ P R O M I S C U O U S _ M O D E _ E N A B L E 
 # d e f i n e   E T H _ P R O M I S C I O U S M O D E _ D I S A B L E     E T H _ P R O M I S C U O U S _ M O D E _ D I S A B L E 
 # d e f i n e   I S _ E T H _ P R O M I S C I O U S _ M O D E             I S _ E T H _ P R O M I S C U O U S _ M O D E 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ L T D C _ A l i a s e d _ M a c r o s   H A L   L T D C   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   _ _ H A L _ L T D C _ L A Y E R   L T D C _ L A Y E R 
 # d e f i n e   _ _ H A L _ L T D C _ R E L O A D _ C O N F I G     _ _ H A L _ L T D C _ R E L O A D _ I M M E D I A T E _ C O N F I G 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S A I _ A l i a s e d _ M a c r o s   H A L   S A I   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # d e f i n e   S A I _ O U T P U T D R I V E _ D I S A B L E D                     S A I _ O U T P U T D R I V E _ D I S A B L E 
 # d e f i n e   S A I _ O U T P U T D R I V E _ E N A B L E D                       S A I _ O U T P U T D R I V E _ E N A B L E 
 # d e f i n e   S A I _ M A S T E R D I V I D E R _ E N A B L E D                   S A I _ M A S T E R D I V I D E R _ E N A B L E 
 # d e f i n e   S A I _ M A S T E R D I V I D E R _ D I S A B L E D                 S A I _ M A S T E R D I V I D E R _ D I S A B L E 
 # d e f i n e   S A I _ S T R E O M O D E                                           S A I _ S T E R E O M O D E 
 # d e f i n e   S A I _ F I F O S t a t u s _ E m p t y                             S A I _ F I F O S T A T U S _ E M P T Y 
 # d e f i n e   S A I _ F I F O S t a t u s _ L e s s 1 Q u a r t e r F u l l       S A I _ F I F O S T A T U S _ L E S S 1 Q U A R T E R F U L L 
 # d e f i n e   S A I _ F I F O S t a t u s _ 1 Q u a r t e r F u l l               S A I _ F I F O S T A T U S _ 1 Q U A R T E R F U L L 
 # d e f i n e   S A I _ F I F O S t a t u s _ H a l f F u l l                       S A I _ F I F O S T A T U S _ H A L F F U L L 
 # d e f i n e   S A I _ F I F O S t a t u s _ 3 Q u a r t e r s F u l l             S A I _ F I F O S T A T U S _ 3 Q U A R T E R F U L L 
 # d e f i n e   S A I _ F I F O S t a t u s _ F u l l                               S A I _ F I F O S T A T U S _ F U L L 
 # d e f i n e   I S _ S A I _ B L O C K _ M O N O _ S T R E O _ M O D E             I S _ S A I _ B L O C K _ M O N O _ S T E R E O _ M O D E 
 # d e f i n e   S A I _ S Y N C H R O N O U S _ E X T                               S A I _ S Y N C H R O N O U S _ E X T _ S A I 1 
 # d e f i n e   S A I _ S Y N C E X T _ I N _ E N A B L E                           S A I _ S Y N C E X T _ O U T B L O C K A _ E N A B L E 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ S P D I F R X _ A l i a s e d _ M a c r o s   H A L   S P D I F R X   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # i f   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   H A L _ S P D I F R X _ R e c e i v e C o n t r o l F l o w             H A L _ S P D I F R X _ R e c e i v e C t r l F l o w 
 # d e f i n e   H A L _ S P D I F R X _ R e c e i v e C o n t r o l F l o w _ I T       H A L _ S P D I F R X _ R e c e i v e C t r l F l o w _ I T 
 # d e f i n e   H A L _ S P D I F R X _ R e c e i v e C o n t r o l F l o w _ D M A     H A L _ S P D I F R X _ R e c e i v e C t r l F l o w _ D M A 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ H R T I M _ A l i a s e d _ F u n c t i o n s   H A L   H R T I M   A l i a s e d   F u n c t i o n s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # i f   d e f i n e d   ( S T M 3 2 H 7 )   | |   d e f i n e d   ( S T M 3 2 G 4 )   | |   d e f i n e d   ( S T M 3 2 F 3 ) 
 # d e f i n e   H A L _ H R T I M _ W a v e f o r m C o u n t e r S t a r t _ I T             H A L _ H R T I M _ W a v e f o r m C o u n t S t a r t _ I T 
 # d e f i n e   H A L _ H R T I M _ W a v e f o r m C o u n t e r S t a r t _ D M A           H A L _ H R T I M _ W a v e f o r m C o u n t S t a r t _ D M A 
 # d e f i n e   H A L _ H R T I M _ W a v e f o r m C o u n t e r S t a r t                   H A L _ H R T I M _ W a v e f o r m C o u n t S t a r t 
 # d e f i n e   H A L _ H R T I M _ W a v e f o r m C o u n t e r S t o p _ I T               H A L _ H R T I M _ W a v e f o r m C o u n t S t o p _ I T 
 # d e f i n e   H A L _ H R T I M _ W a v e f o r m C o u n t e r S t o p _ D M A             H A L _ H R T I M _ W a v e f o r m C o u n t S t o p _ D M A 
 # d e f i n e   H A L _ H R T I M _ W a v e f o r m C o u n t e r S t o p                     H A L _ H R T I M _ W a v e f o r m C o u n t S t o p 
 # e n d i f 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ Q S P I _ A l i a s e d _ M a c r o s   H A L   Q S P I   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 # i f   d e f i n e d   ( S T M 3 2 L 4 )   | |   d e f i n e d   ( S T M 3 2 F 4 )   | |   d e f i n e d   ( S T M 3 2 F 7 )   | |   d e f i n e d ( S T M 3 2 H 7 ) 
 # d e f i n e   H A L _ Q P S I _ T I M E O U T _ D E F A U L T _ V A L U E   H A L _ Q S P I _ T I M E O U T _ D E F A U L T _ V A L U E 
 # e n d i f   / *   S T M 3 2 L 4   | |   S T M 3 2 F 4   | |   S T M 3 2 F 7   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   H A L _ P P P _ A l i a s e d _ M a c r o s   H A L   P P P   A l i a s e d   M a c r o s   m a i n t a i n e d   f o r   l e g a c y   p u r p o s e 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   S T M 3 2 _ H A L _ L E G A C Y   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 
 