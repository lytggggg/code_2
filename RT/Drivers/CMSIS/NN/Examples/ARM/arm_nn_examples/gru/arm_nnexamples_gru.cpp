??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
 *  
 *  
 *   P r o j e c t :               C M S I S   N N   L i b r a r y  
 *   T i t l e :                   a r m _ n n e x a m p l e s _ g r u . c p p  
 *  
 *   D e s c r i p t i o n :       G a t e d   R e c u r r e n t   U n i t   E x a m p l e  
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 7  
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
 *       -   N e i t h e r   t h e   n a m e   o f   A r m   L I M I T E D   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s  
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
   *   @ d e f g r o u p   G R U E x a m p l e   G a t e d   R e c u r r e n t   U n i t   E x a m p l e  
   *  
   *   \ p a r   D e s c r i p t i o n :  
   *   \ p a r  
   *   D e m o n s t r a t e s   a   g a t e d   r e c u r r e n t   u n i t   ( G R U )   e x a m p l e   w i t h   t h e   u s e   o f   f u l l y - c o n n e c t e d ,  
   *   T a n h / S i g m o i d   a c t i v a t i o n   f u n c t i o n s .  
   *  
   *   \ p a r   M o d e l   d e f i n i t i o n :  
   *   \ p a r  
   *   G R U   i s   a   t y p e   o f   r e c u r r e n t   n e u r a l   n e t w o r k   ( R N N ) .   I t   c o n t a i n s   t w o   s i g m o i d   g a t e s   a n d   o n e   h i d d e n  
   *   s t a t e .    
   *   \ p a r  
   *   T h e   c o m p u t a t i o n   c a n   b e   s u m m a r i z e d   a s :  
   *   < p r e > z [ t ]   =   s i g m o i d (   W _ z   & s d o t ;   { h [ t - 1 ] , x [ t ] }   )  
   *   r [ t ]   =   s i g m o i d (   W _ r   & s d o t ;   { h [ t - 1 ] , x [ t ] }   )    
   *   n [ t ]   =   t a n h (   W _ n   & s d o t ;   [ r [ t ]   & t i m e s ;   { h [ t - 1 ] ,   x [ t ] }   )    
   *   h [ t ]   =   ( 1   -   z [ t ] )   & t i m e s ;   h [ t - 1 ]   +   z [ t ]   & t i m e s ;   n [ t ]   < / p r e >  
   *   \ i m a g e   h t m l   G R U . g i f   " G a t e   R e c u r r e n t   U n i t   D i a g r a m "  
   *  
   *   \ p a r   V a r i a b l e s   D e s c r i p t i o n :  
   *   \ p a r  
   *   \ l i   \ c   u p d a t e _ g a t e _ w e i g h t s ,   \ c   r e s e t _ g a t e _ w e i g h t s ,   \ c   h i d d e n _ s t a t e _ w e i g h t s   a r e   w e i g h t s   c o r r e s p o n d i n g   t o   u p d a t e   g a t e   ( W _ z ) ,   r e s e t   g a t e   ( W _ r ) ,   a n d   h i d d e n   s t a t e   ( W _ n ) .  
   *   \ l i   \ c   u p d a t e _ g a t e _ b i a s ,   \ c   r e s e t _ g a t e _ b i a s ,   \ c   h i d d e n _ s t a t e _ b i a s   a r e   l a y e r   b i a s   a r r a y s  
   *   \ l i   \ c   t e s t _ i n p u t 1 ,   \ c   t e s t _ i n p u t 2 ,   \ c   t e s t _ h i s t o r y   a r e   t h e   i n p u t s   a n d   i n i t i a l   h i s t o r y  
   *  
   *   \ p a r  
   *   T h e   b u f f e r   i s   a l l o c a t e d   a s :  
   *   \ p a r  
   *   |   r e s e t   |   i n p u t   |   h i s t o r y   |   u p d a t e   |   h i d d e n _ s t a t e   |  
   *   \ p a r  
   *   I n   t h i s   w a y ,   t h e   c o n c a t i n a t i o n   i s   a u t o m a t i c a l l y   d o n e   s i n c e   ( r e s e t ,   i n p u t )   a n d   ( i n p u t ,   h i s t o r y )  
   *   a r e   p h y s i c a l l y   c o n c a t i n a t e d   i n   m e m o r y .  
   *   \ p a r  
   *     T h e   o r d e r i n g   o f   t h e   w e i g h t   m a t r i x   s h o u l d   b e   a d j u s t e d   a c c o r d i n g l y .  
   *  
     *  
   *    
   *   \ p a r   C M S I S   D S P   S o f t w a r e   L i b r a r y   F u n c t i o n s   U s e d :  
   *   \ p a r  
   *   -   a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ o p t ( )  
   *   -   a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( )  
   *   -   a r m _ m u l t _ q 1 5 ( )  
   *   -   a r m _ o f f s e t _ q 1 5 ( )  
   *   -   a r m _ s u b _ q 1 5 ( )  
   *   -   a r m _ c o p y _ q 1 5 ( )  
   *  
   *   < b >   R e f e r     < / b >  
   *   \ l i n k   a r m _ n n e x a m p l e s _ g r u . c p p   \ e n d l i n k  
   *  
   * /  
  
 # i n c l u d e   < s t d i o . h >  
 # i n c l u d e   < s t d l i b . h >  
 # i n c l u d e   < m a t h . h >  
 # i n c l u d e   " a r m _ n n e x a m p l e s _ g r u _ t e s t _ d a t a . h "  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
  
 # i f d e f   _ R T E _  
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i f d e f   R T E _ C o m p i l e r _ E v e n t R e c o r d e r  
 # i n c l u d e   " E v e n t R e c o r d e r . h "  
 # e n d i f  
 # e n d i f  
  
 # d e f i n e   D I M _ H I S T O R Y   3 2  
 # d e f i n e   D I M _ I N P U T   3 2  
 # d e f i n e   D I M _ V E C   6 4  
  
 # d e f i n e   U S E _ X 4  
  
 # i f n d e f   U S E _ X 4  
 s t a t i c   q 7 _ t   u p d a t e _ g a t e _ w e i g h t s [ D I M _ V E C   *   D I M _ H I S T O R Y ]   =   U P D A T E _ G A T E _ W E I G H T _ X 2 ;  
 s t a t i c   q 7 _ t   r e s e t _ g a t e _ w e i g h t s [ D I M _ V E C   *   D I M _ H I S T O R Y ]   =   R E S E T _ G A T E _ W E I G H T _ X 2 ;  
 s t a t i c   q 7 _ t   h i d d e n _ s t a t e _ w e i g h t s [ D I M _ V E C   *   D I M _ H I S T O R Y ]   =   H I D D E N _ S T A T E _ W E I G H T _ X 2 ;  
 # e l s e  
 s t a t i c   q 7 _ t   u p d a t e _ g a t e _ w e i g h t s [ D I M _ V E C   *   D I M _ H I S T O R Y ]   =   U P D A T E _ G A T E _ W E I G H T _ X 4 ;  
 s t a t i c   q 7 _ t   r e s e t _ g a t e _ w e i g h t s [ D I M _ V E C   *   D I M _ H I S T O R Y ]   =   R E S E T _ G A T E _ W E I G H T _ X 4 ;  
 s t a t i c   q 7 _ t   h i d d e n _ s t a t e _ w e i g h t s [ D I M _ V E C   *   D I M _ H I S T O R Y ]   =   H I D D E N _ S T A T E _ W E I G H T _ X 4 ;  
 # e n d i f  
  
 s t a t i c   q 7 _ t   u p d a t e _ g a t e _ b i a s [ D I M _ H I S T O R Y ]   =   U P D A T E _ G A T E _ B I A S ;  
 s t a t i c   q 7 _ t   r e s e t _ g a t e _ b i a s [ D I M _ H I S T O R Y ]   =   R E S E T _ G A T E _ B I A S ;  
 s t a t i c   q 7 _ t   h i d d e n _ s t a t e _ b i a s [ D I M _ H I S T O R Y ]   =   H I D D E N _ S T A T E _ B I A S ;  
  
 s t a t i c   q 1 5 _ t   t e s t _ i n p u t 1 [ D I M _ I N P U T ]   =   I N P U T _ D A T A 1 ;  
 s t a t i c   q 1 5 _ t   t e s t _ i n p u t 2 [ D I M _ I N P U T ]   =   I N P U T _ D A T A 2 ;  
 s t a t i c   q 1 5 _ t   t e s t _ h i s t o r y [ D I M _ H I S T O R Y ]   =   H I S T O R Y _ D A T A ;  
  
 q 1 5 _ t           s c r a t c h _ b u f f e r [ D I M _ H I S T O R Y   *   4   +   D I M _ I N P U T ] ;  
  
 v o i d   g r u _ e x a m p l e ( q 1 5 _ t   *   s c r a t c h _ i n p u t ,   u i n t 1 6 _ t   i n p u t _ s i z e ,   u i n t 1 6 _ t   h i s t o r y _ s i z e ,  
                                   q 7 _ t   *   w e i g h t s _ u p d a t e ,   q 7 _ t   *   w e i g h t s _ r e s e t ,   q 7 _ t   *   w e i g h t s _ h i d d e n _ s t a t e ,  
                                   q 7 _ t   *   b i a s _ u p d a t e ,   q 7 _ t   *   b i a s _ r e s e t ,   q 7 _ t   *   b i a s _ h i d d e n _ s t a t e )  
 {  
     q 1 5 _ t         * r e s e t   =   s c r a t c h _ i n p u t ;  
     q 1 5 _ t         * i n p u t   =   s c r a t c h _ i n p u t   +   h i s t o r y _ s i z e ;  
     q 1 5 _ t         * h i s t o r y   =   s c r a t c h _ i n p u t   +   h i s t o r y _ s i z e   +   i n p u t _ s i z e ;  
     q 1 5 _ t         * u p d a t e   =   s c r a t c h _ i n p u t   +   2   *   h i s t o r y _ s i z e   +   i n p u t _ s i z e ;  
     q 1 5 _ t         * h i d d e n _ s t a t e   =   s c r a t c h _ i n p u t   +   3   *   h i s t o r y _ s i z e   +   i n p u t _ s i z e ;  
  
     / /   r e s e t   g a t e   c a l c u l a t i o n  
     / /   t h e   r a n g e   o f   t h e   o u t p u t   c a n   b e   a d j u s t e d   w i t h   b i a s _ s h i f t   a n d   o u t p u t _ s h i f t  
 # i f n d e f   U S E _ X 4  
     a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 ( i n p u t ,   w e i g h t s _ r e s e t ,   i n p u t _ s i z e   +   h i s t o r y _ s i z e ,   h i s t o r y _ s i z e ,   0 ,   1 5 ,   b i a s _ r e s e t ,  
                                                                           r e s e t ,   N U L L ) ;  
 # e l s e  
     a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ o p t ( i n p u t ,   w e i g h t s _ r e s e t ,   i n p u t _ s i z e   +   h i s t o r y _ s i z e ,   h i s t o r y _ s i z e ,   0 ,   1 5 ,  
                                                                                   b i a s _ r e s e t ,   r e s e t ,   N U L L ) ;  
 # e n d i f  
     / /   s i g m o i d   f u n c t i o n ,   t h e   s i z e   o f   t h e   i n t e g e r   b i t - w i d t h   s h o u l d   b e   c o n s i s t e n t   w i t h   o u t _ s h i f t  
     a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( r e s e t ,   h i s t o r y _ s i z e ,   0 ,   A R M _ S I G M O I D ) ;  
     a r m _ m u l t _ q 1 5 ( h i s t o r y ,   r e s e t ,   r e s e t ,   h i s t o r y _ s i z e ) ;  
  
     / /   u p d a t e   g a t e   c a l c u l a t i o n  
     / /   t h e   r a n g e   o f   t h e   o u t p u t   c a n   b e   a d j u s t e d   w i t h   b i a s _ s h i f t   a n d   o u t p u t _ s h i f t  
 # i f n d e f   U S E _ X 4  
     a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 ( i n p u t ,   w e i g h t s _ u p d a t e ,   i n p u t _ s i z e   +   h i s t o r y _ s i z e ,   h i s t o r y _ s i z e ,   0 ,   1 5 ,  
                                                                           b i a s _ u p d a t e ,   u p d a t e ,   N U L L ) ;  
 # e l s e  
     a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ o p t ( i n p u t ,   w e i g h t s _ u p d a t e ,   i n p u t _ s i z e   +   h i s t o r y _ s i z e ,   h i s t o r y _ s i z e ,   0 ,   1 5 ,  
                                                                                   b i a s _ u p d a t e ,   u p d a t e ,   N U L L ) ;  
 # e n d i f  
  
     / /   s i g m o i d   f u n c t i o n ,   t h e   s i z e   o f   t h e   i n t e g e r   b i t - w i d t h   s h o u l d   b e   c o n s i s t e n t   w i t h   o u t _ s h i f t  
     a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( u p d a t e ,   h i s t o r y _ s i z e ,   0 ,   A R M _ S I G M O I D ) ;  
  
     / /   h i d d e n   s t a t e   c a l c u l a t i o n  
 # i f n d e f   U S E _ X 4  
     a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 ( r e s e t ,   w e i g h t s _ h i d d e n _ s t a t e ,   i n p u t _ s i z e   +   h i s t o r y _ s i z e ,   h i s t o r y _ s i z e ,   0 ,   1 5 ,  
                                                                           b i a s _ h i d d e n _ s t a t e ,   h i d d e n _ s t a t e ,   N U L L ) ;  
 # e l s e  
     a r m _ f u l l y _ c o n n e c t e d _ m a t _ q 7 _ v e c _ q 1 5 _ o p t ( r e s e t ,   w e i g h t s _ h i d d e n _ s t a t e ,   i n p u t _ s i z e   +   h i s t o r y _ s i z e ,   h i s t o r y _ s i z e ,   0 ,   1 5 ,  
                                                                                   b i a s _ h i d d e n _ s t a t e ,   h i d d e n _ s t a t e ,   N U L L ) ;  
 # e n d i f  
  
     / /   t a n h   f u n c t i o n ,   t h e   s i z e   o f   t h e   i n t e g e r   b i t - w i d t h   s h o u l d   b e   c o n s i s t e n t   w i t h   o u t _ s h i f t  
     a r m _ n n _ a c t i v a t i o n s _ d i r e c t _ q 1 5 ( h i d d e n _ s t a t e ,   h i s t o r y _ s i z e ,   0 ,   A R M _ T A N H ) ;  
     a r m _ m u l t _ q 1 5 ( u p d a t e ,   h i d d e n _ s t a t e ,   h i d d e n _ s t a t e ,   h i s t o r y _ s i z e ) ;  
  
     / /   w e   c a l c u l a t e   z   -   1   h e r e  
     / /   s o   f i n a l   a d d i t i o n   b e c o m e s   s u b s t r a c t i o n  
     a r m _ o f f s e t _ q 1 5 ( u p d a t e ,   0 x 8 0 0 0 ,   u p d a t e ,   h i s t o r y _ s i z e ) ;  
     / /   m u l t i p l y   h i s t o r y  
     a r m _ m u l t _ q 1 5 ( h i s t o r y ,   u p d a t e ,   u p d a t e ,   h i s t o r y _ s i z e ) ;  
     / /   c a l c u l a t e   h i s t o r y _ o u t  
     a r m _ s u b _ q 1 5 ( h i d d e n _ s t a t e ,   u p d a t e ,   h i s t o r y ,   h i s t o r y _ s i z e ) ;  
  
     r e t u r n ;  
 }  
  
 i n t   m a i n ( )  
 {  
     # i f d e f   R T E _ C o m p i l e r _ E v e n t R e c o r d e r  
     E v e n t R e c o r d e r I n i t i a l i z e   ( E v e n t R e c o r d A l l ,   1 ) ;     / /   i n i t i a l i z e   a n d   s t a r t   E v e n t   R e c o r d e r  
     # e n d i f  
  
     p r i n t f ( " S t a r t   G R U   e x e c u t i o n \ n " ) ;  
     i n t               i n p u t _ s i z e   =   D I M _ I N P U T ;  
     i n t               h i s t o r y _ s i z e   =   D I M _ H I S T O R Y ;  
  
     / /   c o p y   o v e r   t h e   i n p u t   d a t a    
     a r m _ c o p y _ q 1 5 ( t e s t _ i n p u t 1 ,   s c r a t c h _ b u f f e r   +   h i s t o r y _ s i z e ,   i n p u t _ s i z e ) ;  
     a r m _ c o p y _ q 1 5 ( t e s t _ h i s t o r y ,   s c r a t c h _ b u f f e r   +   h i s t o r y _ s i z e   +   i n p u t _ s i z e ,   h i s t o r y _ s i z e ) ;  
  
     g r u _ e x a m p l e ( s c r a t c h _ b u f f e r ,   i n p u t _ s i z e ,   h i s t o r y _ s i z e ,  
                             u p d a t e _ g a t e _ w e i g h t s ,   r e s e t _ g a t e _ w e i g h t s ,   h i d d e n _ s t a t e _ w e i g h t s ,  
                             u p d a t e _ g a t e _ b i a s ,   r e s e t _ g a t e _ b i a s ,   h i d d e n _ s t a t e _ b i a s ) ;  
     p r i n t f ( " C o m p l e t e   f i r s t   i t e r a t i o n   o n   G R U \ n " ) ;  
  
     a r m _ c o p y _ q 1 5 ( t e s t _ i n p u t 2 ,   s c r a t c h _ b u f f e r   +   h i s t o r y _ s i z e ,   i n p u t _ s i z e ) ;  
     g r u _ e x a m p l e ( s c r a t c h _ b u f f e r ,   i n p u t _ s i z e ,   h i s t o r y _ s i z e ,  
                             u p d a t e _ g a t e _ w e i g h t s ,   r e s e t _ g a t e _ w e i g h t s ,   h i d d e n _ s t a t e _ w e i g h t s ,  
                             u p d a t e _ g a t e _ b i a s ,   r e s e t _ g a t e _ b i a s ,   h i d d e n _ s t a t e _ b i a s ) ;  
     p r i n t f ( " C o m p l e t e   s e c o n d   i t e r a t i o n   o n   G R U \ n " ) ;  
  
     r e t u r n   0 ;  
 }  