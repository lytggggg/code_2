??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 1 2 - 0 9 - 2 0           B e r n a r d             C h a n g e   t h e   n a m e   t o   c o m p o n e n t s . c  
   *                                                           A n d   a l l   c o m p o n e n t s   r e l a t e d   h e a d e r   f i l e s .  
   *   2 0 1 2 - 1 2 - 2 3           B e r n a r d             f i x   t h e   p t h r e a d   i n i t i a l i z a t i o n   i s s u e .  
   *   2 0 1 3 - 0 6 - 2 3           B e r n a r d             A d d   t h e   i n i t _ c a l l   f o r   c o m p o n e n t s   i n i t i a l i z a t i o n .  
   *   2 0 1 3 - 0 7 - 0 5           B e r n a r d             R e m o v e   i n i t i a l i z a t i o n   f e a t u r e   f o r   M S   V C + +   c o m p i l e r  
   *   2 0 1 5 - 0 2 - 0 6           B e r n a r d             R e m o v e   t h e   M S   V C + +   s u p p o r t   a n d   m o v e   t o   t h e   k e r n e l  
   *   2 0 1 5 - 0 5 - 0 4           B e r n a r d             R e n a m e   i t   t o   c o m p o n e n t s . c   b e c a u s e   c o m p i l i n g   i s s u e  
   *                                                           i n   s o m e   I D E s .  
   *   2 0 1 5 - 0 7 - 2 9           A r d a . F u             A d d   s u p p o r t   t o   u s e   R T _ U S I N G _ U S E R _ M A I N   w i t h   I A R  
   *   2 0 1 8 - 1 1 - 2 2           J e s v e n               A d d   s e c o n d a r y   c p u   b o o t   u p  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i f d e f   R T _ U S I N G _ U S E R _ M A I N  
 # i f n d e f   R T _ M A I N _ T H R E A D _ S T A C K _ S I Z E  
 # d e f i n e   R T _ M A I N _ T H R E A D _ S T A C K _ S I Z E           2 0 4 8  
 # e n d i f  
 # i f n d e f   R T _ M A I N _ T H R E A D _ P R I O R I T Y  
 # d e f i n e   R T _ M A I N _ T H R E A D _ P R I O R I T Y               ( R T _ T H R E A D _ P R I O R I T Y _ M A X   /   3 )  
 # e n d i f  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ C O M P O N E N T S _ I N I T  
 / *  
   *   C o m p o n e n t s   I n i t i a l i z a t i o n   w i l l   i n i t i a l i z e   s o m e   d r i v e r   a n d   c o m p o n e n t s   a s   f o l l o w i n g  
   *   o r d e r :  
   *   r t i _ s t a r t                   - - >   0  
   *   B O A R D _ E X P O R T             - - >   1  
   *   r t i _ b o a r d _ e n d           - - >   1 . e n d  
   *  
   *   D E V I C E _ E X P O R T           - - >   2  
   *   C O M P O N E N T _ E X P O R T     - - >   3  
   *   F S _ E X P O R T                   - - >   4  
   *   E N V _ E X P O R T                 - - >   5  
   *   A P P _ E X P O R T                 - - >   6  
   *  
   *   r t i _ e n d                       - - >   6 . e n d  
   *  
   *   T h e s e   a u t o m a t i c a l l y   i n i t i a l i z a t i o n ,   t h e   d r i v e r   o r   c o m p o n e n t   i n i t i a l   f u n c t i o n   m u s t  
   *   b e   d e f i n e d   w i t h :  
   *   I N I T _ B O A R D _ E X P O R T ( f n ) ;  
   *   I N I T _ D E V I C E _ E X P O R T ( f n ) ;  
   *   . . .  
   *   I N I T _ A P P _ E X P O R T ( f n ) ;  
   *   e t c .  
   * /  
 s t a t i c   i n t   r t i _ s t a r t ( v o i d )  
 {  
         r e t u r n   0 ;  
 }  
 I N I T _ E X P O R T ( r t i _ s t a r t ,   " 0 " ) ;  
  
 s t a t i c   i n t   r t i _ b o a r d _ s t a r t ( v o i d )  
 {  
         r e t u r n   0 ;  
 }  
 I N I T _ E X P O R T ( r t i _ b o a r d _ s t a r t ,   " 0 . e n d " ) ;  
  
 s t a t i c   i n t   r t i _ b o a r d _ e n d ( v o i d )  
 {  
         r e t u r n   0 ;  
 }  
 I N I T _ E X P O R T ( r t i _ b o a r d _ e n d ,   " 1 . e n d " ) ;  
  
 s t a t i c   i n t   r t i _ e n d ( v o i d )  
 {  
         r e t u r n   0 ;  
 }  
 I N I T _ E X P O R T ( r t i _ e n d ,   " 6 . e n d " ) ;  
  
 / * *  
   *   R T - T h r e a d   C o m p o n e n t s   I n i t i a l i z a t i o n   f o r   b o a r d  
   * /  
 v o i d   r t _ c o m p o n e n t s _ b o a r d _ i n i t ( v o i d )  
 {  
 # i f   R T _ D E B U G _ I N I T  
         i n t   r e s u l t ;  
         c o n s t   s t r u c t   r t _ i n i t _ d e s c   * d e s c ;  
         f o r   ( d e s c   =   & _ _ r t _ i n i t _ d e s c _ r t i _ b o a r d _ s t a r t ;   d e s c   <   & _ _ r t _ i n i t _ d e s c _ r t i _ b o a r d _ e n d ;   d e s c   + + )  
         {  
                 r t _ k p r i n t f ( " i n i t i a l i z e   % s " ,   d e s c - > f n _ n a m e ) ;  
                 r e s u l t   =   d e s c - > f n ( ) ;  
                 r t _ k p r i n t f ( " : % d   d o n e \ n " ,   r e s u l t ) ;  
         }  
 # e l s e  
         v o l a t i l e   c o n s t   i n i t _ f n _ t   * f n _ p t r ;  
  
         f o r   ( f n _ p t r   =   & _ _ r t _ i n i t _ r t i _ b o a r d _ s t a r t ;   f n _ p t r   <   & _ _ r t _ i n i t _ r t i _ b o a r d _ e n d ;   f n _ p t r + + )  
         {  
                 ( * f n _ p t r ) ( ) ;  
         }  
 # e n d i f  
 }  
  
 / * *  
   *   R T - T h r e a d   C o m p o n e n t s   I n i t i a l i z a t i o n  
   * /  
 v o i d   r t _ c o m p o n e n t s _ i n i t ( v o i d )  
 {  
 # i f   R T _ D E B U G _ I N I T  
         i n t   r e s u l t ;  
         c o n s t   s t r u c t   r t _ i n i t _ d e s c   * d e s c ;  
  
         r t _ k p r i n t f ( " d o   c o m p o n e n t s   i n i t i a l i z a t i o n . \ n " ) ;  
         f o r   ( d e s c   =   & _ _ r t _ i n i t _ d e s c _ r t i _ b o a r d _ e n d ;   d e s c   <   & _ _ r t _ i n i t _ d e s c _ r t i _ e n d ;   d e s c   + + )  
         {  
                 r t _ k p r i n t f ( " i n i t i a l i z e   % s " ,   d e s c - > f n _ n a m e ) ;  
                 r e s u l t   =   d e s c - > f n ( ) ;  
                 r t _ k p r i n t f ( " : % d   d o n e \ n " ,   r e s u l t ) ;  
         }  
 # e l s e  
         v o l a t i l e   c o n s t   i n i t _ f n _ t   * f n _ p t r ;  
  
         f o r   ( f n _ p t r   =   & _ _ r t _ i n i t _ r t i _ b o a r d _ e n d ;   f n _ p t r   <   & _ _ r t _ i n i t _ r t i _ e n d ;   f n _ p t r   + + )  
         {  
                 ( * f n _ p t r ) ( ) ;  
         }  
 # e n d i f  
 }  
 # e n d i f       / *   R T _ U S I N G _ C O M P O N E N T S _ I N I T   * /  
  
 # i f d e f   R T _ U S I N G _ U S E R _ M A I N  
  
 v o i d   r t _ a p p l i c a t i o n _ i n i t ( v o i d ) ;  
 v o i d   r t _ h w _ b o a r d _ i n i t ( v o i d ) ;  
 i n t   r t t h r e a d _ s t a r t u p ( v o i d ) ;  
  
 # i f   d e f i n e d ( _ _ C C _ A R M )   | |   d e f i n e d ( _ _ C L A N G _ A R M )  
 e x t e r n   i n t   $ S u p e r $ $ m a i n ( v o i d ) ;  
 / *   r e - d e f i n e   m a i n   f u n c t i o n   * /  
 i n t   $ S u b $ $ m a i n ( v o i d )  
 {  
         r t t h r e a d _ s t a r t u p ( ) ;  
         r e t u r n   0 ;  
 }  
 # e l i f   d e f i n e d ( _ _ I C C A R M _ _ )  
 e x t e r n   i n t   m a i n ( v o i d ) ;  
 / *   _ _ l o w _ l e v e l _ i n i t   w i l l   a u t o   c a l l e d   b y   I A R   c s t a r t u p   * /  
 e x t e r n   v o i d   _ _ i a r _ d a t a _ i n i t 3 ( v o i d ) ;  
 i n t   _ _ l o w _ l e v e l _ i n i t ( v o i d )  
 {  
         / /   c a l l   I A R   t a b l e   c o p y   f u n c t i o n .  
         _ _ i a r _ d a t a _ i n i t 3 ( ) ;  
         r t t h r e a d _ s t a r t u p ( ) ;  
         r e t u r n   0 ;  
 }  
 # e l i f   d e f i n e d ( _ _ G N U C _ _ )  
 / *   A d d   - e e n t r y   t o   a r m - n o n e - e a b i - g c c   a r g u m e n t   * /  
 i n t   e n t r y ( v o i d )  
 {  
         r t t h r e a d _ s t a r t u p ( ) ;  
         r e t u r n   0 ;  
 }  
 # e n d i f  
  
 # i f n d e f   R T _ U S I N G _ H E A P  
 / *   i f   t h e r e   i s   n o t   e n a b l e   h e a p ,   w e   s h o u l d   u s e   s t a t i c   t h r e a d   a n d   s t a c k .   * /  
 A L I G N ( 8 )  
 s t a t i c   r t _ u i n t 8 _ t   m a i n _ s t a c k [ R T _ M A I N _ T H R E A D _ S T A C K _ S I Z E ] ;  
 s t r u c t   r t _ t h r e a d   m a i n _ t h r e a d ;  
 # e n d i f  
  
 / *   t h e   s y s t e m   m a i n   t h r e a d   * /  
 v o i d   m a i n _ t h r e a d _ e n t r y ( v o i d   * p a r a m e t e r )  
 {  
         e x t e r n   i n t   m a i n ( v o i d ) ;  
         e x t e r n   i n t   $ S u p e r $ $ m a i n ( v o i d ) ;  
  
 # i f d e f   R T _ U S I N G _ C O M P O N E N T S _ I N I T  
         / *   R T - T h r e a d   c o m p o n e n t s   i n i t i a l i z a t i o n   * /  
         r t _ c o m p o n e n t s _ i n i t ( ) ;  
 # e n d i f  
         / *   i n v o k e   s y s t e m   m a i n   f u n c t i o n   * /  
 # i f   d e f i n e d ( _ _ C C _ A R M )   | |   d e f i n e d ( _ _ C L A N G _ A R M )  
         $ S u p e r $ $ m a i n ( ) ;   / *   f o r   A R M C C .   * /  
 # e l i f   d e f i n e d ( _ _ I C C A R M _ _ )   | |   d e f i n e d ( _ _ G N U C _ _ )  
         m a i n ( ) ;  
 # e n d i f  
 }  
  
 v o i d   r t _ a p p l i c a t i o n _ i n i t ( v o i d )  
 {  
         r t _ t h r e a d _ t   t i d ;  
  
 # i f d e f   R T _ U S I N G _ H E A P  
         t i d   =   r t _ t h r e a d _ c r e a t e ( " m a i n " ,   m a i n _ t h r e a d _ e n t r y ,   R T _ N U L L ,  
                                                       R T _ M A I N _ T H R E A D _ S T A C K _ S I Z E ,   R T _ M A I N _ T H R E A D _ P R I O R I T Y ,   2 0 ) ;  
         R T _ A S S E R T ( t i d   ! =   R T _ N U L L ) ;  
 # e l s e  
         r t _ e r r _ t   r e s u l t ;  
  
         t i d   =   & m a i n _ t h r e a d ;  
         r e s u l t   =   r t _ t h r e a d _ i n i t ( t i d ,   " m a i n " ,   m a i n _ t h r e a d _ e n t r y ,   R T _ N U L L ,  
                                                         m a i n _ s t a c k ,   s i z e o f ( m a i n _ s t a c k ) ,   R T _ M A I N _ T H R E A D _ P R I O R I T Y ,   2 0 ) ;  
         R T _ A S S E R T ( r e s u l t   = =   R T _ E O K ) ;  
  
         / *   i f   n o t   d e f i n e   R T _ U S I N G _ H E A P ,   u s i n g   t o   e l i m i n a t e   t h e   w a r n i n g   * /  
         ( v o i d ) r e s u l t ;  
 # e n d i f  
  
         r t _ t h r e a d _ s t a r t u p ( t i d ) ;  
 }  
  
 i n t   r t t h r e a d _ s t a r t u p ( v o i d )  
 {  
         r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
  
         / *   b o a r d   l e v e l   i n i t i a l i z a t i o n  
           *   N O T E :   p l e a s e   i n i t i a l i z e   h e a p   i n s i d e   b o a r d   i n i t i a l i z a t i o n .  
           * /  
         r t _ h w _ b o a r d _ i n i t ( ) ;  
  
         / *   s h o w   R T - T h r e a d   v e r s i o n   * /  
         r t _ s h o w _ v e r s i o n ( ) ;  
  
         / *   t i m e r   s y s t e m   i n i t i a l i z a t i o n   * /  
         r t _ s y s t e m _ t i m e r _ i n i t ( ) ;  
  
         / *   s c h e d u l e r   s y s t e m   i n i t i a l i z a t i o n   * /  
         r t _ s y s t e m _ s c h e d u l e r _ i n i t ( ) ;  
  
         / *   c r e a t e   i n i t _ t h r e a d   * /  
         r t _ a p p l i c a t i o n _ i n i t ( ) ;  
  
         / *   t i m e r   t h r e a d   i n i t i a l i z a t i o n   * /  
         r t _ s y s t e m _ t i m e r _ t h r e a d _ i n i t ( ) ;  
  
         / *   i d l e   t h r e a d   i n i t i a l i z a t i o n   * /  
         r t _ t h r e a d _ i d l e _ i n i t ( ) ;  
  
         / *   s t a r t   s c h e d u l e r   * /  
         r t _ s y s t e m _ s c h e d u l e r _ s t a r t ( ) ;  
  
         / *   n e v e r   r e a c h   h e r e   * /  
         r e t u r n   0 ;  
 }  
 # e n d i f  