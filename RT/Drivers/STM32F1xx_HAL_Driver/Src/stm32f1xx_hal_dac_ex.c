??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ d a c _ e x . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       E x t e n d e d   D A C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   e x t e n d e d  
     *                     f u n c t i o n a l i t i e s   o f   t h e   D A C   p e r i p h e r a l .  
     *  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
  
           * * *   D u a l   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
             ( + )   W h e n   D u a l   m o d e   i s   e n a b l e d   ( i . e .   D A C   C h a n n e l 1   a n d   C h a n n e l 2   a r e   u s e d   s i m u l t a n e o u s l y )   :  
                     U s e   H A L _ D A C E x _ D u a l G e t V a l u e ( )   t o   g e t   d i g i t a l   d a t a   t o   b e   c o n v e r t e d   a n d   u s e  
                     H A L _ D A C E x _ D u a l S e t V a l u e ( )   t o   s e t   d i g i t a l   v a l u e   t o   c o n v e r t e d   s i m u l t a n e o u s l y   i n  
                     C h a n n e l   1   a n d   C h a n n e l   2 .  
  
           * * *   S i g n a l   g e n e r a t i o n   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
             ( + )   U s e   H A L _ D A C E x _ T r i a n g l e W a v e G e n e r a t e ( )   t o   g e n e r a t e   T r i a n g l e   s i g n a l .  
             ( + )   U s e   H A L _ D A C E x _ N o i s e W a v e G e n e r a t e ( )   t o   g e n e r a t e   N o i s e   s i g n a l .  
  
   @ e n d v e r b a t i m  
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
  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ D A C _ M O D U L E _ E N A B L E D  
  
 # i f   d e f i n e d ( D A C )  
  
 / * *   @ d e f g r o u p   D A C E x   D A C E x  
     *   @ b r i e f   D A C   E x t e n d e d   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   D A C E x _ E x p o r t e d _ F u n c t i o n s   D A C E x   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   D A C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f         E x t e n d e d   I O   o p e r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   E x t e n d e d   f e a t u r e s   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   S t a r t   c o n v e r s i o n .  
             ( + )   S t o p   c o n v e r s i o n .  
             ( + )   S t a r t   c o n v e r s i o n   a n d   e n a b l e   D M A   t r a n s f e r .  
             ( + )   S t o p   c o n v e r s i o n   a n d   d i s a b l e   D M A   t r a n s f e r .  
             ( + )   G e t   r e s u l t   o f   c o n v e r s i o n .  
             ( + )   G e t   r e s u l t   o f   d u a l   m o d e   c o n v e r s i o n .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     E n a b l e s   D A C   a n d   s t a r t s   c o n v e r s i o n   o f   b o t h   c h a n n e l s .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C E x _ D u a l S t a r t ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     u i n t 3 2 _ t   t m p _ s w t r i g   =   0 U L ;  
  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     / *   E n a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ D A C _ E N A B L E ( h d a c ,   D A C _ C H A N N E L _ 1 ) ;  
     _ _ H A L _ D A C _ E N A B L E ( h d a c ,   D A C _ C H A N N E L _ 2 ) ;  
  
     / *   C h e c k   i f   s o f t w a r e   t r i g g e r   e n a b l e d   * /  
     i f   ( ( h d a c - > I n s t a n c e - > C R   &   ( D A C _ C R _ T E N 1   |   D A C _ C R _ T S E L 1 ) )   = =   D A C _ T R I G G E R _ S O F T W A R E )  
     {  
         t m p _ s w t r i g   | =   D A C _ S W T R I G R _ S W T R I G 1 ;  
     }  
     i f   ( ( h d a c - > I n s t a n c e - > C R   &   ( D A C _ C R _ T E N 2   |   D A C _ C R _ T S E L 2 ) )   = =   ( D A C _ T R I G G E R _ S O F T W A R E   < <   ( D A C _ C H A N N E L _ 2   &   0 x 1 0 U L ) ) )  
     {  
         t m p _ s w t r i g   | =   D A C _ S W T R I G R _ S W T R I G 2 ;  
     }  
     / *   E n a b l e   t h e   s e l e c t e d   D A C   s o f t w a r e   c o n v e r s i o n * /  
     S E T _ B I T ( h d a c - > I n s t a n c e - > S W T R I G R ,   t m p _ s w t r i g ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   D A C   a n d   s t o p   c o n v e r s i o n   o f   b o t h   c h a n n e l s .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C E x _ D u a l S t o p ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
  
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ D A C _ D I S A B L E ( h d a c ,   D A C _ C H A N N E L _ 1 ) ;  
     _ _ H A L _ D A C _ D I S A B L E ( h d a c ,   D A C _ C H A N N E L _ 2 ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     E n a b l e   o r   d i s a b l e   t h e   s e l e c t e d   D A C   c h a n n e l   w a v e   g e n e r a t i o n .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ p a r a m     A m p l i t u d e   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 1 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   1  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 3 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   3  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 7 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   7  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 1 5 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   1 5  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 3 1 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   3 1  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 6 3 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   6 3  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 1 2 7 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   1 2 7  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 2 5 5 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   2 5 5  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 5 1 1 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   5 1 1  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 1 0 2 3 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   1 0 2 3  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 2 0 4 7 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   2 0 4 7  
     *                         @ a r g   D A C _ T R I A N G L E A M P L I T U D E _ 4 0 9 5 :   S e l e c t   m a x   t r i a n g l e   a m p l i t u d e   o f   4 0 9 5  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C E x _ T r i a n g l e W a v e G e n e r a t e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   A m p l i t u d e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ L F S R _ U N M A S K _ T R I A N G L E _ A M P L I T U D E ( A m p l i t u d e ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     / *   E n a b l e   t h e   t r i a n g l e   w a v e   g e n e r a t i o n   f o r   t h e   s e l e c t e d   D A C   c h a n n e l   * /  
     M O D I F Y _ R E G ( h d a c - > I n s t a n c e - > C R ,   ( ( D A C _ C R _ W A V E 1 )   |   ( D A C _ C R _ M A M P 1 ) )   < <   ( C h a n n e l   &   0 x 1 0 U L ) ,  
                           ( D A C _ C R _ W A V E 1 _ 1   |   A m p l i t u d e )   < <   ( C h a n n e l   &   0 x 1 0 U L ) ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   o r   d i s a b l e   t h e   s e l e c t e d   D A C   c h a n n e l   w a v e   g e n e r a t i o n .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     C h a n n e l   T h e   s e l e c t e d   D A C   c h a n n e l .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ C H A N N E L _ 1 :   D A C   C h a n n e l 1   s e l e c t e d  
     *                         @ a r g   D A C _ C H A N N E L _ 2 :   D A C   C h a n n e l 2   s e l e c t e d  
     *   @ p a r a m     A m p l i t u d e   U n m a s k   D A C   c h a n n e l   L F S R   f o r   n o i s e   w a v e   g e n e r a t i o n .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t 0   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 1 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 1 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 2 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 2 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 3 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 3 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 4 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 4 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 5 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 5 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 6 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 6 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 7 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 7 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 8 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 8 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 9 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 9 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 1 0 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 1 0 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *                         @ a r g   D A C _ L F S R U N M A S K _ B I T S 1 1 _ 0 :   U n m a s k   D A C   c h a n n e l   L F S R   b i t [ 1 1 : 0 ]   f o r   n o i s e   w a v e   g e n e r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C E x _ N o i s e W a v e G e n e r a t e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   A m p l i t u d e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ C H A N N E L ( C h a n n e l ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ L F S R _ U N M A S K _ T R I A N G L E _ A M P L I T U D E ( A m p l i t u d e ) ) ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h d a c ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ B U S Y ;  
  
     / *   E n a b l e   t h e   n o i s e   w a v e   g e n e r a t i o n   f o r   t h e   s e l e c t e d   D A C   c h a n n e l   * /  
     M O D I F Y _ R E G ( h d a c - > I n s t a n c e - > C R ,   ( ( D A C _ C R _ W A V E 1 )   |   ( D A C _ C R _ M A M P 1 ) )   < <   ( C h a n n e l   &   0 x 1 0 U L ) ,  
                           ( D A C _ C R _ W A V E 1 _ 0   |   A m p l i t u d e )   < <   ( C h a n n e l   &   0 x 1 0 U L ) ) ;  
  
     / *   C h a n g e   D A C   s t a t e   * /  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   u n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h d a c ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S e t   t h e   s p e c i f i e d   d a t a   h o l d i n g   r e g i s t e r   v a l u e   f o r   d u a l   D A C   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ p a r a m     A l i g n m e n t   S p e c i f i e s   t h e   d a t a   a l i g n m e n t   f o r   d u a l   c h a n n e l   D A C .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         D A C _ A L I G N _ 8 B _ R :   8 b i t   r i g h t   d a t a   a l i g n m e n t   s e l e c t e d  
     *                         D A C _ A L I G N _ 1 2 B _ L :   1 2 b i t   l e f t   d a t a   a l i g n m e n t   s e l e c t e d  
     *                         D A C _ A L I G N _ 1 2 B _ R :   1 2 b i t   r i g h t   d a t a   a l i g n m e n t   s e l e c t e d  
     *   @ p a r a m     D a t a 1   D a t a   f o r   D A C   C h a n n e l 1   t o   b e   l o a d e d   i n   t h e   s e l e c t e d   d a t a   h o l d i n g   r e g i s t e r .  
     *   @ p a r a m     D a t a 2   D a t a   f o r   D A C   C h a n n e l 2   t o   b e   l o a d e d   i n   t h e   s e l e c t e d   d a t a     h o l d i n g   r e g i s t e r .  
     *   @ n o t e       I n   d u a l   m o d e ,   a   u n i q u e   r e g i s t e r   a c c e s s   i s   r e q u i r e d   t o   w r i t e   i n   b o t h  
     *                     D A C   c h a n n e l s   a t   t h e   s a m e   t i m e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ D A C E x _ D u a l S e t V a l u e ( D A C _ H a n d l e T y p e D e f   * h d a c ,   u i n t 3 2 _ t   A l i g n m e n t ,   u i n t 3 2 _ t   D a t a 1 ,   u i n t 3 2 _ t   D a t a 2 )  
 {  
     u i n t 3 2 _ t   d a t a ;  
     u i n t 3 2 _ t   t m p ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ D A C _ A L I G N ( A l i g n m e n t ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ D A T A ( D a t a 1 ) ) ;  
     a s s e r t _ p a r a m ( I S _ D A C _ D A T A ( D a t a 2 ) ) ;  
  
     / *   C a l c u l a t e   a n d   s e t   d u a l   D A C   d a t a   h o l d i n g   r e g i s t e r   v a l u e   * /  
     i f   ( A l i g n m e n t   = =   D A C _ A L I G N _ 8 B _ R )  
     {  
         d a t a   =   ( ( u i n t 3 2 _ t ) D a t a 2   < <   8 U )   |   D a t a 1 ;  
     }  
     e l s e  
     {  
         d a t a   =   ( ( u i n t 3 2 _ t ) D a t a 2   < <   1 6 U )   |   D a t a 1 ;  
     }  
  
     t m p   =   ( u i n t 3 2 _ t ) h d a c - > I n s t a n c e ;  
     t m p   + =   D A C _ D H R 1 2 R D _ A L I G N M E N T ( A l i g n m e n t ) ;  
  
     / *   S e t   t h e   d u a l   D A C   s e l e c t e d   d a t a   h o l d i n g   r e g i s t e r   * /  
     * ( _ _ I O   u i n t 3 2 _ t   * ) t m p   =   d a t a ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r s i o n   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e   f o r   C h a n n e l 2 .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C E x _ C o n v C p l t C a l l b a c k C h 2 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C E x _ C o n v C p l t C a l l b a c k C h 2   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     C o n v e r s i o n   h a l f   D M A   t r a n s f e r   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e   f o r   C h a n n e l 2 .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     E r r o r   D A C   c a l l b a c k   f o r   C h a n n e l 2 .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C E x _ E r r o r C a l l b a c k C h 2 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C E x _ E r r o r C a l l b a c k C h 2   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   u n d e r r u n   D A C   c a l l b a c k   f o r   C h a n n e l 2 .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2 ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d a c ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ D A C E x _ D M A U n d e r r u n C a l l b a c k C h 2   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   D A C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f         E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                           # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   S e t   t h e   s p e c i f i e d   d a t a   h o l d i n g   r e g i s t e r   v a l u e   f o r   D A C   c h a n n e l .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   l a s t   d a t a   o u t p u t   v a l u e   o f   t h e   s e l e c t e d   D A C   c h a n n e l .  
     *   @ p a r a m     h d a c   p o i n t e r   t o   a   D A C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D A C .  
     *   @ r e t v a l   T h e   s e l e c t e d   D A C   c h a n n e l   d a t a   o u t p u t   v a l u e .  
     * /  
 u i n t 3 2 _ t   H A L _ D A C E x _ D u a l G e t V a l u e ( D A C _ H a n d l e T y p e D e f   * h d a c )  
 {  
     u i n t 3 2 _ t   t m p   =   0 U L ;  
  
     t m p   | =   h d a c - > I n s t a n c e - > D O R 1 ;  
  
     t m p   | =   h d a c - > I n s t a n c e - > D O R 2   < <   1 6 U L ;  
  
     / *   R e t u r n s   t h e   D A C   c h a n n e l   d a t a   o u t p u t   r e g i s t e r   v a l u e   * /  
     r e t u r n   t m p ;  
 }  
  
  
 / * *  
     *   @ }  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   D A C E x _ P r i v a t e _ F u n c t i o n s   D A C E x   p r i v a t e   f u n c t i o n s  
     *     @ b r i e f         E x t e n d e d   p r i v a t e   f u n c t i o n s  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     D M A   c o n v e r s i o n   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   D A C _ D M A C o n v C p l t C h 2 ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     D A C _ H a n d l e T y p e D e f   * h d a c   =   ( D A C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h d a c - > C o n v C p l t C a l l b a c k C h 2 ( h d a c ) ;  
 # e l s e  
     H A L _ D A C E x _ C o n v C p l t C a l l b a c k C h 2 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   D A C _ D M A H a l f C o n v C p l t C h 2 ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     D A C _ H a n d l e T y p e D e f   * h d a c   =   ( D A C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     / *   C o n v e r s i o n   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h d a c - > C o n v H a l f C p l t C a l l b a c k C h 2 ( h d a c ) ;  
 # e l s e  
     H A L _ D A C E x _ C o n v H a l f C p l t C a l l b a c k C h 2 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   D A C _ D M A E r r o r C h 2 ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     D A C _ H a n d l e T y p e D e f   * h d a c   =   ( D A C _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     / *   S e t   D A C   e r r o r   c o d e   t o   D M A   e r r o r   * /  
     h d a c - > E r r o r C o d e   | =   H A L _ D A C _ E R R O R _ D M A ;  
  
 # i f   ( U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h d a c - > E r r o r C a l l b a c k C h 2 ( h d a c ) ;  
 # e l s e  
     H A L _ D A C E x _ E r r o r C a l l b a c k C h 2 ( h d a c ) ;  
 # e n d i f   / *   U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h d a c - > S t a t e   =   H A L _ D A C _ S T A T E _ R E A D Y ;  
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
 # e n d i f   / *   D A C   * /  
  
 # e n d i f   / *   H A L _ D A C _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  