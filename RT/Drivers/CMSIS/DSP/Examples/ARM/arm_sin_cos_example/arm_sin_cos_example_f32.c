�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 2   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *   $ D a t e :                   1 2 .   M a r c h   2 0 1 4  
 *   $ R e v i s i o n :           V 1 . 4 . 3  
 *  
 *   P r o j e c t :               C M S I S   D S P   L i b r a r y  
 *   T i t l e :                   a r m _ s i n _ c o s _ e x a m p l e _ f 3 2 . c  
 *  
 *   D e s c r i p t i o n :       E x a m p l e   c o d e   d e m o n s t r a t i n g   s i n   a n d   c o s   c a l c u l a t i o n   o f   i n p u t   s i g n a l .  
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 3  
 *  
 *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
 *   m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s  
 *   a r e   m e t :  
 *       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
 *       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n  
 *           t h e   d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e  
 *           d i s t r i b u t i o n .  
 *       -   N e i t h e r   t h e   n a m e   o f   A R M   L I M I T E D   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s  
 *           m a y   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s  
 *           s o f t w a r e   w i t h o u t   s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
 *  
 *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S  
 *   " A S   I S "   A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T  
 *   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S  
 *   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   T H E  
 *   C O P Y R I G H T   O W N E R   O R   C O N T R I B U T O R S   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,  
 *   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,  
 *   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;  
 *   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S   I N T E R R U P T I O N )   H O W E V E R  
 *   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T  
 *   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N  
 *   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
 *   P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 / * *  
   *   @ i n g r o u p   g r o u p E x a m p l e s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   S i n C o s E x a m p l e   S i n e C o s i n e   E x a m p l e  
   *  
   *   \ p a r   D e s c r i p t i o n :  
   *   \ p a r  
   *   D e m o n s t r a t e s   t h e   P y t h a g o r e a n   t r i g n o m e t r i c   i d e n t i t y   w i t h   t h e   u s e   o f   C o s i n e ,   S i n e ,   V e c t o r  
   *   M u l t i p l i c a t i o n ,   a n d   V e c t o r   A d d i t i o n   f u n c t i o n s .  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   \ p a r  
   *   M a t h e m a t i c a l l y ,   t h e   P y t h a g o r e a n   t r i g n o m e t r i c   i d e n t i t y   i s   d e f i n e d   b y   t h e   f o l l o w i n g   e q u a t i o n :  
   *     < p r e > s i n ( x )   *   s i n ( x )   +   c o s ( x )   *   c o s ( x )   =   1 < / p r e >  
   *   w h e r e   \ c   x   i s   t h e   a n g l e   i n   r a d i a n s .  
   *  
   *   \ p a r   B l o c k   D i a g r a m :  
   *   \ p a r  
   *   \ i m a g e   h t m l   s i n C o s . g i f  
   *  
   *   \ p a r   V a r i a b l e s   D e s c r i p t i o n :  
   *   \ p a r  
   *   \ l i   \ c   t e s t I n p u t _ f 3 2   a r r a y   o f   i n p u t   a n g l e   i n   r a d i a n s  
   *   \ l i   \ c   t e s t O u t p u t   s t o r e s   s u m   o f   t h e   s q u a r e s   o f   s i n e   a n d   c o s i n e   v a l u e s   o f   i n p u t   a n g l e  
   *  
   *   \ p a r   C M S I S   D S P   S o f t w a r e   L i b r a r y   F u n c t i o n s   U s e d :  
   *   \ p a r  
   *   -   a r m _ c o s _ f 3 2 ( )  
   *   -   a r m _ s i n _ f 3 2 ( )  
   *   -   a r m _ m u l t _ f 3 2 ( )  
   *   -   a r m _ a d d _ f 3 2 ( )  
   *  
   *   < b >   R e f e r     < / b >  
   *   \ l i n k   a r m _ s i n _ c o s _ e x a m p l e _ f 3 2 . c   \ e n d l i n k  
   *  
   * /  
  
  
 / * *   \ e x a m p l e   a r m _ s i n _ c o s _ e x a m p l e _ f 3 2 . c  
     * /  
  
 # i n c l u d e   < m a t h . h >  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   D e f i n e s   e a c h   o f   t h e   t e s t s   p e r f o r m e d  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 # d e f i n e   M A X _ B L O C K S I Z E       3 2  
 # d e f i n e   D E L T A                       ( 0 . 0 0 0 1 f )  
  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   T e s t   i n p u t   d a t a   f o r   F l o a t i n g   p o i n t   s i n _ c o s   e x a m p l e   f o r   3 2 - b l o c k S i z e  
 *   G e n e r a t e d   b y   t h e   M A T L A B   r a n d n ( )   f u n c t i o n  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 c o n s t   f l o a t 3 2 _ t   t e s t I n p u t _ f 3 2 [ M A X _ B L O C K S I Z E ]   =  
 {  
     - 1 . 2 4 4 9 1 6 8 7 5 8 5 3 2 3 5 4 0 0 ,     - 4 . 7 9 3 5 3 3 9 2 9 1 7 1 3 2 4 8 0 0 ,       0 . 3 6 0 7 0 5 0 3 0 2 3 3 2 4 8 8 5 0 ,       0 . 8 2 7 9 2 9 6 4 4 1 7 0 8 8 7 3 2 0 ,     - 3 . 2 9 9 5 3 2 2 1 8 3 1 2 4 2 6 9 0 0 ,       3 . 4 2 7 4 4 1 9 0 3 2 2 7 6 2 3 8 0 0 ,       3 . 4 2 2 4 0 1 7 8 4 2 9 4 6 0 7 7 0 0 ,     - 0 . 1 0 8 3 0 8 1 6 5 3 3 4 0 1 0 6 8 0 ,  
       0 . 9 4 1 9 4 3 8 9 6 4 9 0 3 1 2 1 8 0 ,       0 . 5 0 2 6 0 9 5 7 5 0 0 0 3 6 5 8 5 0 ,     - 0 . 5 3 7 3 4 5 2 7 8 7 3 6 3 7 3 5 0 0 ,       2 . 0 8 8 8 1 7 3 9 2 9 6 5 7 6 4 5 0 0 ,     - 1 . 6 9 3 1 6 8 6 8 4 1 4 3 4 5 5 7 0 0 ,       6 . 2 8 3 1 8 5 3 0 7 1 7 9 5 9 0 7 0 0 ,     - 0 . 3 9 2 5 4 5 8 8 4 7 4 6 1 7 5 0 8 0 ,       0 . 3 2 7 8 9 3 0 9 5 1 1 5 8 2 5 0 4 0 ,  
       3 . 0 7 0 1 4 7 4 4 0 4 5 6 2 9 2 3 0 0 ,       0 . 1 7 0 6 1 1 4 0 5 8 8 4 6 6 2 2 3 0 ,     - 0 . 2 7 5 2 7 5 0 8 2 3 9 6 0 7 3 0 1 0 ,     - 2 . 3 9 5 4 9 2 8 0 5 4 4 6 7 9 6 3 0 0 ,       0 . 8 4 7 3 1 1 1 6 3 5 3 6 5 0 6 6 0 0 ,     - 3 . 8 4 5 5 1 7 0 1 8 0 8 3 1 4 8 8 0 0 ,       2 . 0 5 5 8 1 8 3 7 8 4 1 5 8 6 8 3 0 0 ,       4 . 6 7 2 5 9 4 1 6 1 9 7 8 9 3 0 8 0 0 ,  
     - 1 . 9 9 0 9 2 3 0 3 0 2 6 6 4 2 5 8 0 0 ,       2 . 4 6 9 3 0 5 1 9 7 6 5 6 2 4 9 5 0 0 ,       3 . 6 0 9 0 0 2 6 0 6 0 6 4 0 2 1 0 0 0 ,     - 4 . 5 8 6 7 3 6 5 8 2 3 3 1 6 6 7 5 0 0 ,     - 4 . 1 4 7 0 8 0 1 3 9 1 3 6 1 3 6 3 0 0 ,       1 . 6 4 3 7 5 6 7 1 8 8 6 8 3 5 9 5 0 0 ,     - 1 . 1 5 0 8 6 6 3 9 2 3 6 6 4 9 4 8 0 0 ,       1 . 9 8 5 8 0 5 0 2 6 4 7 7 4 3 3 8 0 0  
  
  
 } ;  
  
 c o n s t   f l o a t 3 2 _ t   t e s t R e f O u t p u t _ f 3 2   =   1 . 0 0 0 0 0 0 0 0 0 ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   D e c l a r e   G l o b a l   v a r i a b l e s  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 u i n t 3 2 _ t   b l o c k S i z e   =   3 2 ;  
 f l o a t 3 2 _ t     t e s t O u t p u t ;  
 f l o a t 3 2 _ t     c o s O u t p u t ;  
 f l o a t 3 2 _ t     s i n O u t p u t ;  
 f l o a t 3 2 _ t     c o s S q u a r e O u t p u t ;  
 f l o a t 3 2 _ t     s i n S q u a r e O u t p u t ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   M a x   m a g n i t u d e   F F T   B i n   t e s t  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 a r m _ s t a t u s   s t a t u s ;  
  
 i n t 3 2 _ t   m a i n ( v o i d )  
 {  
     f l o a t 3 2 _ t   d i f f ;  
     u i n t 3 2 _ t   i ;  
  
     f o r ( i = 0 ;   i <   b l o c k S i z e ;   i + + )  
     {  
         c o s O u t p u t   =   a r m _ c o s _ f 3 2 ( t e s t I n p u t _ f 3 2 [ i ] ) ;  
         s i n O u t p u t   =   a r m _ s i n _ f 3 2 ( t e s t I n p u t _ f 3 2 [ i ] ) ;  
  
         a r m _ m u l t _ f 3 2 ( & c o s O u t p u t ,   & c o s O u t p u t ,   & c o s S q u a r e O u t p u t ,   1 ) ;  
         a r m _ m u l t _ f 3 2 ( & s i n O u t p u t ,   & s i n O u t p u t ,   & s i n S q u a r e O u t p u t ,   1 ) ;  
  
         a r m _ a d d _ f 3 2 ( & c o s S q u a r e O u t p u t ,   & s i n S q u a r e O u t p u t ,   & t e s t O u t p u t ,   1 ) ;  
  
         / *   a b s o l u t e   v a l u e   o f   d i f f e r e n c e   b e t w e e n   r e f   a n d   t e s t   * /  
         d i f f   =   f a b s f ( t e s t R e f O u t p u t _ f 3 2   -   t e s t O u t p u t ) ;  
  
         / *   C o m p a r i s o n   o f   s i n _ c o s   v a l u e   w i t h   r e f e r e n c e   * /  
         i f   ( d i f f   >   D E L T A )  
         {  
               s t a t u s   =   A R M _ M A T H _ T E S T _ F A I L U R E ;  
         }  
  
         i f   (   s t a t u s   = =   A R M _ M A T H _ T E S T _ F A I L U R E )  
         {  
               w h i l e   ( 1 ) ;  
         }  
  
     }  
  
     w h i l e   ( 1 ) ;                                                           / *   m a i n   f u n c t i o n   d o e s   n o t   r e t u r n   * /  
 }  
  
   / * *   \ e n d l i n k   * /  