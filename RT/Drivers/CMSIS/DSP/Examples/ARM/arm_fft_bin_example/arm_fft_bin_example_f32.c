??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 2   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *   $ D a t e :                   1 7 .   J a n u a r y   2 0 1 3  
 *   $ R e v i s i o n :           V 1 . 4 . 0  
 *  
 *   P r o j e c t :               C M S I S   D S P   L i b r a r y  
 *   T i t l e : 	           a r m _ f f t _ b i n _ e x a m p l e _ f 3 2 . c  
 *  
 *   D e s c r i p t i o n :       E x a m p l e   c o d e   d e m o n s t r a t i n g   c a l c u l a t i o n   o f   M a x   e n e r g y   b i n   o f  
 *                                 f r e q u e n c y   d o m a i n   o f   i n p u t   s i g n a l .  
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
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 / * *  
   *   @ i n g r o u p   g r o u p E x a m p l e s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   F r e q u e n c y B i n   F r e q u e n c y   B i n   E x a m p l e  
   *  
   *   \ p a r   D e s c r i p t i o n  
   *   \ p a r  
   *   D e m o n s t r a t e s   t h e   c a l c u l a t i o n   o f   t h e   m a x i m u m   e n e r g y   b i n   i n   t h e   f r e q u e n c y  
   *   d o m a i n   o f   t h e   i n p u t   s i g n a l   w i t h   t h e   u s e   o f   C o m p l e x   F F T ,   C o m p l e x  
   *   M a g n i t u d e ,   a n d   M a x i m u m   f u n c t i o n s .  
   *  
   *   \ p a r   A l g o r i t h m :  
   *   \ p a r  
   *   T h e   i n p u t   t e s t   s i g n a l   c o n t a i n s   a   1 0   k H z   s i g n a l   w i t h   u n i f o r m l y   d i s t r i b u t e d   w h i t e   n o i s e .  
   *   C a l c u l a t i n g   t h e   F F T   o f   t h e   i n p u t   s i g n a l   w i l l   g i v e   u s   t h e   m a x i m u m   e n e r g y   o f   t h e  
   *   b i n   c o r r e s p o n d i n g   t o   t h e   i n p u t   f r e q u e n c y   o f   1 0   k H z .  
   *  
   *   \ p a r   B l o c k   D i a g r a m :  
   *   \ i m a g e   h t m l   F F T B i n . g i f   " B l o c k   D i a g r a m "  
   *   \ p a r  
   *   T h e   f i g u r e   b e l o w   s h o w s   t h e   t i m e   d o m a i n   s i g n a l   o f   1 0   k H z   s i g n a l   w i t h  
   *   u n i f o r m l y   d i s t r i b u t e d   w h i t e   n o i s e ,   a n d   t h e   n e x t   f i g u r e   s h o w s   t h e   i n p u t  
   *   i n   t h e   f r e q u e n c y   d o m a i n .   T h e   b i n   w i t h   m a x i m u m   e n e r g y   c o r r e s p o n d s   t o   1 0   k H z   s i g n a l .  
   *   \ p a r  
   *   \ i m a g e   h t m l   F F T B i n I n p u t . g i f   " I n p u t   s i g n a l   i n   T i m e   d o m a i n "  
   *   \ i m a g e   h t m l   F F T B i n O u t p u t . g i f   " I n p u t   s i g n a l   i n   F r e q u e n c y   d o m a i n "  
   *  
   *   \ p a r   V a r i a b l e s   D e s c r i p t i o n :  
   *   \ p a r  
   *   \ l i   \ c   t e s t I n p u t _ f 3 2 _ 1 0 k h z   p o i n t s   t o   t h e   i n p u t   d a t a  
   *   \ l i   \ c   t e s t O u t p u t   p o i n t s   t o   t h e   o u t p u t   d a t a  
   *   \ l i   \ c   f f t S i z e   l e n g t h   o f   F F T  
   *   \ l i   \ c   i f f t F l a g   f l a g   f o r   t h e   s e l e c t i o n   o f   C F F T / C I F F T  
   *   \ l i   \ c   d o B i t R e v e r s e   F l a g   f o r   s e l e c t i o n   o f   n o r m a l   o r d e r   o r   b i t   r e v e r s e d   o r d e r  
   *   \ l i   \ c   r e f I n d e x   r e f e r e n c e   i n d e x   v a l u e   a t   w h i c h   m a x i m u m   e n e r g y   o f   b i n   o c u u r s  
   *   \ l i   \ c   t e s t I n d e x   c a l c u l a t e d   i n d e x   v a l u e   a t   w h i c h   m a x i m u m   e n e r g y   o f   b i n   o c u u r s  
   *  
   *   \ p a r   C M S I S   D S P   S o f t w a r e   L i b r a r y   F u n c t i o n s   U s e d :  
   *   \ p a r  
   *   -   a r m _ c f f t _ f 3 2 ( )  
   *   -   a r m _ c m p l x _ m a g _ f 3 2 ( )  
   *   -   a r m _ m a x _ f 3 2 ( )  
   *  
   *   < b >   R e f e r     < / b >  
   *   \ l i n k   a r m _ f f t _ b i n _ e x a m p l e _ f 3 2 . c   \ e n d l i n k  
   *  
   * /  
  
  
 / * *   \ e x a m p l e   a r m _ f f t _ b i n _ e x a m p l e _ f 3 2 . c  
     * /  
  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ c o n s t _ s t r u c t s . h "  
  
 # d e f i n e   T E S T _ L E N G T H _ S A M P L E S   2 0 4 8  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   E x t e r n a l   I n p u t   a n d   O u t p u t   b u f f e r   D e c l a r a t i o n s   f o r   F F T   B i n   E x a m p l e  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 e x t e r n   f l o a t 3 2 _ t   t e s t I n p u t _ f 3 2 _ 1 0 k h z [ T E S T _ L E N G T H _ S A M P L E S ] ;  
 s t a t i c   f l o a t 3 2 _ t   t e s t O u t p u t [ T E S T _ L E N G T H _ S A M P L E S / 2 ] ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   G l o b a l   v a r i a b l e s   f o r   F F T   B i n   E x a m p l e  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 u i n t 3 2 _ t   f f t S i z e   =   1 0 2 4 ;  
 u i n t 3 2 _ t   i f f t F l a g   =   0 ;  
 u i n t 3 2 _ t   d o B i t R e v e r s e   =   1 ;  
  
 / *   R e f e r e n c e   i n d e x   a t   w h i c h   m a x   e n e r g y   o f   b i n   o c u u r s   * /  
 u i n t 3 2 _ t   r e f I n d e x   =   2 1 3 ,   t e s t I n d e x   =   0 ;  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   M a x   m a g n i t u d e   F F T   B i n   t e s t  
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 i n t 3 2 _ t   m a i n ( v o i d )  
 {  
  
     a r m _ s t a t u s   s t a t u s ;  
     f l o a t 3 2 _ t   m a x V a l u e ;  
  
     s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
  
     / *   P r o c e s s   t h e   d a t a   t h r o u g h   t h e   C F F T / C I F F T   m o d u l e   * /  
     a r m _ c f f t _ f 3 2 ( & a r m _ c f f t _ s R _ f 3 2 _ l e n 1 0 2 4 ,   t e s t I n p u t _ f 3 2 _ 1 0 k h z ,   i f f t F l a g ,   d o B i t R e v e r s e ) ;  
  
     / *   P r o c e s s   t h e   d a t a   t h r o u g h   t h e   C o m p l e x   M a g n i t u d e   M o d u l e   f o r  
     c a l c u l a t i n g   t h e   m a g n i t u d e   a t   e a c h   b i n   * /  
     a r m _ c m p l x _ m a g _ f 3 2 ( t e s t I n p u t _ f 3 2 _ 1 0 k h z ,   t e s t O u t p u t ,   f f t S i z e ) ;  
  
     / *   C a l c u l a t e s   m a x V a l u e   a n d   r e t u r n s   c o r r e s p o n d i n g   B I N   v a l u e   * /  
     a r m _ m a x _ f 3 2 ( t e s t O u t p u t ,   f f t S i z e ,   & m a x V a l u e ,   & t e s t I n d e x ) ;  
  
     i f   ( t e s t I n d e x   ! =     r e f I n d e x )  
     {  
         s t a t u s   =   A R M _ M A T H _ T E S T _ F A I L U R E ;  
     }  
  
     / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     * *   L o o p   h e r e   i f   t h e   s i g n a l s   f a i l   t h e   P A S S   c h e c k .  
     * *   T h i s   d e n o t e s   a   t e s t   f a i l u r e  
     * *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
     i f   (   s t a t u s   ! =   A R M _ M A T H _ S U C C E S S )  
     {  
         w h i l e   ( 1 ) ;  
     }  
  
     w h i l e   ( 1 ) ;                                                           / *   m a i n   f u n c t i o n   d o e s   n o t   r e t u r n   * /  
 }  
  
   / * *   \ e n d l i n k   * /  