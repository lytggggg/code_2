??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                   A u t h o r             N o t e s  
   *   2 0 0 9 - 0 1 - 0 5       B e r n a r d           f i r s t   v e r s i o n  
   *   2 0 1 1 - 0 2 - 1 4       o n e l i f e           M o d i f y   f o r   E F M 3 2  
   *   2 0 1 1 - 0 6 - 1 7       o n e l i f e           M e r g e   a l l   o f   t h e   C   s o u r c e   c o d e   i n t o   c p u p o r t . c  
   *   2 0 1 2 - 1 2 - 2 3       a o z i m a             s t a c k   a d d r   a l i g n   t o   8 b y t e .  
   *   2 0 1 2 - 1 2 - 2 9       B e r n a r d           A d d   e x c e p t i o n   h o o k .  
   *   2 0 1 3 - 0 7 - 0 9       a o z i m a             e n h a n c e m e n t   h a r d   f a u l t   e x c e p t i o n   h a n d l e r .  
   *   2 0 1 9 - 0 7 - 0 3       y a n g j i e           a d d   _ _ r t _ f f s ( )   f o r   a r m c l a n g .  
   * /  
  
 # i n c l u d e   < r t t h r e a d . h >  
  
 s t r u c t   e x c e p t i o n _ s t a c k _ f r a m e  
 {  
         r t _ u i n t 3 2 _ t   r 0 ;  
         r t _ u i n t 3 2 _ t   r 1 ;  
         r t _ u i n t 3 2 _ t   r 2 ;  
         r t _ u i n t 3 2 _ t   r 3 ;  
         r t _ u i n t 3 2 _ t   r 1 2 ;  
         r t _ u i n t 3 2 _ t   l r ;  
         r t _ u i n t 3 2 _ t   p c ;  
         r t _ u i n t 3 2 _ t   p s r ;  
 } ;  
  
 s t r u c t   s t a c k _ f r a m e  
 {  
         / *   r 4   ~   r 1 1   r e g i s t e r   * /  
         r t _ u i n t 3 2 _ t   r 4 ;  
         r t _ u i n t 3 2 _ t   r 5 ;  
         r t _ u i n t 3 2 _ t   r 6 ;  
         r t _ u i n t 3 2 _ t   r 7 ;  
         r t _ u i n t 3 2 _ t   r 8 ;  
         r t _ u i n t 3 2 _ t   r 9 ;  
         r t _ u i n t 3 2 _ t   r 1 0 ;  
         r t _ u i n t 3 2 _ t   r 1 1 ;  
  
         s t r u c t   e x c e p t i o n _ s t a c k _ f r a m e   e x c e p t i o n _ s t a c k _ f r a m e ;  
 } ;  
  
 / *   f l a g   i n   i n t e r r u p t   h a n d l i n g   * /  
 r t _ u i n t 3 2 _ t   r t _ i n t e r r u p t _ f r o m _ t h r e a d ,   r t _ i n t e r r u p t _ t o _ t h r e a d ;  
 r t _ u i n t 3 2 _ t   r t _ t h r e a d _ s w i t c h _ i n t e r r u p t _ f l a g ;  
 / *   e x c e p t i o n   h o o k   * /  
 s t a t i c   r t _ e r r _ t   ( * r t _ e x c e p t i o n _ h o o k ) ( v o i d   * c o n t e x t )   =   R T _ N U L L ;  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   t h r e a d   s t a c k  
   *  
   *   @ p a r a m   t e n t r y   t h e   e n t r y   o f   t h r e a d  
   *   @ p a r a m   p a r a m e t e r   t h e   p a r a m e t e r   o f   e n t r y  
   *   @ p a r a m   s t a c k _ a d d r   t h e   b e g i n n i n g   s t a c k   a d d r e s s  
   *   @ p a r a m   t e x i t   t h e   f u n c t i o n   w i l l   b e   c a l l e d   w h e n   t h r e a d   e x i t  
   *  
   *   @ r e t u r n   s t a c k   a d d r e s s  
   * /  
 r t _ u i n t 8 _ t   * r t _ h w _ s t a c k _ i n i t ( v o i d               * t e n t r y ,  
                                                           v o i d               * p a r a m e t e r ,  
                                                           r t _ u i n t 8 _ t   * s t a c k _ a d d r ,  
                                                           v o i d               * t e x i t )  
 {  
         s t r u c t   s t a c k _ f r a m e   * s t a c k _ f r a m e ;  
         r t _ u i n t 8 _ t                   * s t k ;  
         u n s i g n e d   l o n g               i ;  
  
         s t k     =   s t a c k _ a d d r   +   s i z e o f ( r t _ u i n t 3 2 _ t ) ;  
         s t k     =   ( r t _ u i n t 8 _ t   * ) R T _ A L I G N _ D O W N ( ( r t _ u i n t 3 2 _ t ) s t k ,   8 ) ;  
         s t k   - =   s i z e o f ( s t r u c t   s t a c k _ f r a m e ) ;  
  
         s t a c k _ f r a m e   =   ( s t r u c t   s t a c k _ f r a m e   * ) s t k ;  
  
         / *   i n i t   a l l   r e g i s t e r   * /  
         f o r   ( i   =   0 ;   i   <   s i z e o f ( s t r u c t   s t a c k _ f r a m e )   /   s i z e o f ( r t _ u i n t 3 2 _ t ) ;   i   + + )  
         {  
                 ( ( r t _ u i n t 3 2 _ t   * ) s t a c k _ f r a m e ) [ i ]   =   0 x d e a d b e e f ;  
         }  
  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . r 0     =   ( u n s i g n e d   l o n g ) p a r a m e t e r ;   / *   r 0   :   a r g u m e n t   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . r 1     =   0 ;                                                 / *   r 1   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . r 2     =   0 ;                                                 / *   r 2   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . r 3     =   0 ;                                                 / *   r 3   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . r 1 2   =   0 ;                                                 / *   r 1 2   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . l r     =   ( u n s i g n e d   l o n g ) t e x i t ;           / *   l r   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . p c     =   ( u n s i g n e d   l o n g ) t e n t r y ;         / *   e n t r y   p o i n t ,   p c   * /  
         s t a c k _ f r a m e - > e x c e p t i o n _ s t a c k _ f r a m e . p s r   =   0 x 0 1 0 0 0 0 0 0 L ;                             / *   P S R   * /  
  
         / *   r e t u r n   t a s k ' s   c u r r e n t   s t a c k   a d d r e s s   * /  
         r e t u r n   s t k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   s e t   t h e   h o o k ,   w h i c h   i s   i n v o k e d   o n   f a u l t   e x c e p t i o n   h a n d l i n g .  
   *  
   *   @ p a r a m   e x c e p t i o n _ h a n d l e   t h e   e x c e p t i o n   h a n d l i n g   h o o k   f u n c t i o n .  
   * /  
 v o i d   r t _ h w _ e x c e p t i o n _ i n s t a l l ( r t _ e r r _ t   ( * e x c e p t i o n _ h a n d l e ) ( v o i d *   c o n t e x t ) )  
 {  
         r t _ e x c e p t i o n _ h o o k   =   e x c e p t i o n _ h a n d l e ;  
 }  
  
 # d e f i n e   S C B _ C F S R                 ( * ( v o l a t i l e   c o n s t   u n s i g n e d   * ) 0 x E 0 0 0 E D 2 8 )   / *   C o n f i g u r a b l e   F a u l t   S t a t u s   R e g i s t e r   * /  
 # d e f i n e   S C B _ H F S R                 ( * ( v o l a t i l e   c o n s t   u n s i g n e d   * ) 0 x E 0 0 0 E D 2 C )   / *   H a r d F a u l t   S t a t u s   R e g i s t e r   * /  
 # d e f i n e   S C B _ M M A R                 ( * ( v o l a t i l e   c o n s t   u n s i g n e d   * ) 0 x E 0 0 0 E D 3 4 )   / *   M e m M a n a g e   F a u l t   A d d r e s s   r e g i s t e r   * /  
 # d e f i n e   S C B _ B F A R                 ( * ( v o l a t i l e   c o n s t   u n s i g n e d   * ) 0 x E 0 0 0 E D 3 8 )   / *   B u s   F a u l t   A d d r e s s   R e g i s t e r   * /  
 # d e f i n e   S C B _ A I R C R               ( * ( v o l a t i l e   u n s i g n e d   l o n g   * ) 0 x E 0 0 0 E D 0 C )     / *   R e s e t   c o n t r o l   A d d r e s s   R e g i s t e r   * /  
 # d e f i n e   S C B _ R E S E T _ V A L U E   0 x 0 5 F A 0 0 0 4                                                               / *   R e s e t   v a l u e ,   w r i t e   t o   S C B _ A I R C R   c a n   r e s e t   c p u   * /  
  
 # d e f i n e   S C B _ C F S R _ M F S R       ( * ( v o l a t i l e   c o n s t   u n s i g n e d   c h a r * ) 0 x E 0 0 0 E D 2 8 )     / *   M e m o r y - m a n a g e m e n t   F a u l t   S t a t u s   R e g i s t e r   * /  
 # d e f i n e   S C B _ C F S R _ B F S R       ( * ( v o l a t i l e   c o n s t   u n s i g n e d   c h a r * ) 0 x E 0 0 0 E D 2 9 )     / *   B u s   F a u l t   S t a t u s   R e g i s t e r   * /  
 # d e f i n e   S C B _ C F S R _ U F S R       ( * ( v o l a t i l e   c o n s t   u n s i g n e d   s h o r t * ) 0 x E 0 0 0 E D 2 A )   / *   U s a g e   F a u l t   S t a t u s   R e g i s t e r   * /  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
 s t a t i c   v o i d   u s a g e _ f a u l t _ t r a c k ( v o i d )  
 {  
         r t _ k p r i n t f ( " u s a g e   f a u l t : \ n " ) ;  
         r t _ k p r i n t f ( " S C B _ C F S R _ U F S R : 0 x % 0 2 X   " ,   S C B _ C F S R _ U F S R ) ;  
  
         i f ( S C B _ C F S R _ U F S R   &   ( 1 < < 0 ) )  
         {  
                 / *   [ 0 ] : U N D E F I N S T R   * /  
                 r t _ k p r i n t f ( " U N D E F I N S T R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ U F S R   &   ( 1 < < 1 ) )  
         {  
                 / *   [ 1 ] : I N V S T A T E   * /  
                 r t _ k p r i n t f ( " I N V S T A T E   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ U F S R   &   ( 1 < < 2 ) )  
         {  
                 / *   [ 2 ] : I N V P C   * /  
                 r t _ k p r i n t f ( " I N V P C   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ U F S R   &   ( 1 < < 3 ) )  
         {  
                 / *   [ 3 ] : N O C P   * /  
                 r t _ k p r i n t f ( " N O C P   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ U F S R   &   ( 1 < < 8 ) )  
         {  
                 / *   [ 8 ] : U N A L I G N E D   * /  
                 r t _ k p r i n t f ( " U N A L I G N E D   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ U F S R   &   ( 1 < < 9 ) )  
         {  
                 / *   [ 9 ] : D I V B Y Z E R O   * /  
                 r t _ k p r i n t f ( " D I V B Y Z E R O   " ) ;  
         }  
  
         r t _ k p r i n t f ( " \ n " ) ;  
 }  
  
 s t a t i c   v o i d   b u s _ f a u l t _ t r a c k ( v o i d )  
 {  
         r t _ k p r i n t f ( " b u s   f a u l t : \ n " ) ;  
         r t _ k p r i n t f ( " S C B _ C F S R _ B F S R : 0 x % 0 2 X   " ,   S C B _ C F S R _ B F S R ) ;  
  
         i f ( S C B _ C F S R _ B F S R   &   ( 1 < < 0 ) )  
         {  
                 / *   [ 0 ] : I B U S E R R   * /  
                 r t _ k p r i n t f ( " I B U S E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ B F S R   &   ( 1 < < 1 ) )  
         {  
                 / *   [ 1 ] : P R E C I S E R R   * /  
                 r t _ k p r i n t f ( " P R E C I S E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ B F S R   &   ( 1 < < 2 ) )  
         {  
                 / *   [ 2 ] : I M P R E C I S E R R   * /  
                 r t _ k p r i n t f ( " I M P R E C I S E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ B F S R   &   ( 1 < < 3 ) )  
         {  
                 / *   [ 3 ] : U N S T K E R R   * /  
                 r t _ k p r i n t f ( " U N S T K E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ B F S R   &   ( 1 < < 4 ) )  
         {  
                 / *   [ 4 ] : S T K E R R   * /  
                 r t _ k p r i n t f ( " S T K E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ B F S R   &   ( 1 < < 7 ) )  
         {  
                 r t _ k p r i n t f ( " S C B - > B F A R : % 0 8 X \ n " ,   S C B _ B F A R ) ;  
         }  
         e l s e  
         {  
                 r t _ k p r i n t f ( " \ n " ) ;  
         }  
 }  
  
 s t a t i c   v o i d   m e m _ m a n a g e _ f a u l t _ t r a c k ( v o i d )  
 {  
         r t _ k p r i n t f ( " m e m   m a n a g e   f a u l t : \ n " ) ;  
         r t _ k p r i n t f ( " S C B _ C F S R _ M F S R : 0 x % 0 2 X   " ,   S C B _ C F S R _ M F S R ) ;  
  
         i f ( S C B _ C F S R _ M F S R   &   ( 1 < < 0 ) )  
         {  
                 / *   [ 0 ] : I A C C V I O L   * /  
                 r t _ k p r i n t f ( " I A C C V I O L   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ M F S R   &   ( 1 < < 1 ) )  
         {  
                 / *   [ 1 ] : D A C C V I O L   * /  
                 r t _ k p r i n t f ( " D A C C V I O L   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ M F S R   &   ( 1 < < 3 ) )  
         {  
                 / *   [ 3 ] : M U N S T K E R R   * /  
                 r t _ k p r i n t f ( " M U N S T K E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ M F S R   &   ( 1 < < 4 ) )  
         {  
                 / *   [ 4 ] : M S T K E R R   * /  
                 r t _ k p r i n t f ( " M S T K E R R   " ) ;  
         }  
  
         i f ( S C B _ C F S R _ M F S R   &   ( 1 < < 7 ) )  
         {  
                 / *   [ 7 ] : M M A R V A L I D   * /  
                 r t _ k p r i n t f ( " S C B - > M M A R : % 0 8 X \ n " ,   S C B _ M M A R ) ;  
         }  
         e l s e  
         {  
                 r t _ k p r i n t f ( " \ n " ) ;  
         }  
 }  
  
 s t a t i c   v o i d   h a r d _ f a u l t _ t r a c k ( v o i d )  
 {  
         i f ( S C B _ H F S R   &   ( 1 U L < < 1 ) )  
         {  
                 / *   [ 1 ] : V E C T B L ,   I n d i c a t e s   h a r d   f a u l t   i s   c a u s e d   b y   f a i l e d   v e c t o r   f e t c h .   * /  
                 r t _ k p r i n t f ( " f a i l e d   v e c t o r   f e t c h \ n " ) ;  
         }  
  
         i f ( S C B _ H F S R   &   ( 1 U L < < 3 0 ) )  
         {  
                 / *   [ 3 0 ] : F O R C E D ,   I n d i c a t e s   h a r d   f a u l t   i s   t a k e n   b e c a u s e   o f   b u s   f a u l t ,  
                                                 m e m o r y   m a n a g e m e n t   f a u l t ,   o r   u s a g e   f a u l t .   * /  
                 i f ( S C B _ C F S R _ B F S R )  
                 {  
                         b u s _ f a u l t _ t r a c k ( ) ;  
                 }  
  
                 i f ( S C B _ C F S R _ M F S R )  
                 {  
                         m e m _ m a n a g e _ f a u l t _ t r a c k ( ) ;  
                 }  
  
                 i f ( S C B _ C F S R _ U F S R )  
                 {  
                         u s a g e _ f a u l t _ t r a c k ( ) ;  
                 }  
         }  
  
         i f ( S C B _ H F S R   &   ( 1 U L < < 3 1 ) )  
         {  
                 / *   [ 3 1 ] : D E B U G E V T ,   I n d i c a t e s   h a r d   f a u l t   i s   t r i g g e r e d   b y   d e b u g   e v e n t .   * /  
                 r t _ k p r i n t f ( " d e b u g   e v e n t \ n " ) ;  
         }  
 }  
 # e n d i f   / *   R T _ U S I N G _ F I N S H   * /  
  
 s t r u c t   e x c e p t i o n _ i n f o  
 {  
         r t _ u i n t 3 2 _ t   e x c _ r e t u r n ;  
         s t r u c t   s t a c k _ f r a m e   s t a c k _ f r a m e ;  
 } ;  
  
 / *  
   *   f a u l t   e x c e p t i o n   h a n d l e r  
   * /  
 v o i d   r t _ h w _ h a r d _ f a u l t _ e x c e p t i o n ( s t r u c t   e x c e p t i o n _ i n f o   *   e x c e p t i o n _ i n f o )  
 {  
         e x t e r n   l o n g   l i s t _ t h r e a d ( v o i d ) ;  
         s t r u c t   s t a c k _ f r a m e *   c o n t e x t   =   & e x c e p t i o n _ i n f o - > s t a c k _ f r a m e ;  
  
         i f   ( r t _ e x c e p t i o n _ h o o k   ! =   R T _ N U L L )  
         {  
                 r t _ e r r _ t   r e s u l t ;  
  
                 r e s u l t   =   r t _ e x c e p t i o n _ h o o k ( e x c e p t i o n _ i n f o ) ;  
                 i f   ( r e s u l t   = =   R T _ E O K )  
                         r e t u r n ;  
         }  
  
         r t _ k p r i n t f ( " p s r :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . p s r ) ;  
  
         r t _ k p r i n t f ( " r 0 0 :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . r 0 ) ;  
         r t _ k p r i n t f ( " r 0 1 :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . r 1 ) ;  
         r t _ k p r i n t f ( " r 0 2 :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . r 2 ) ;  
         r t _ k p r i n t f ( " r 0 3 :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . r 3 ) ;  
         r t _ k p r i n t f ( " r 0 4 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 4 ) ;  
         r t _ k p r i n t f ( " r 0 5 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 5 ) ;  
         r t _ k p r i n t f ( " r 0 6 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 6 ) ;  
         r t _ k p r i n t f ( " r 0 7 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 7 ) ;  
         r t _ k p r i n t f ( " r 0 8 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 8 ) ;  
         r t _ k p r i n t f ( " r 0 9 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 9 ) ;  
         r t _ k p r i n t f ( " r 1 0 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 1 0 ) ;  
         r t _ k p r i n t f ( " r 1 1 :   0 x % 0 8 x \ n " ,   c o n t e x t - > r 1 1 ) ;  
         r t _ k p r i n t f ( " r 1 2 :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . r 1 2 ) ;  
         r t _ k p r i n t f ( "   l r :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . l r ) ;  
         r t _ k p r i n t f ( "   p c :   0 x % 0 8 x \ n " ,   c o n t e x t - > e x c e p t i o n _ s t a c k _ f r a m e . p c ) ;  
  
         i f ( e x c e p t i o n _ i n f o - > e x c _ r e t u r n   &   ( 1   < <   2 )   )  
         {  
                 r t _ k p r i n t f ( " h a r d   f a u l t   o n   t h r e a d :   % s \ r \ n \ r \ n " ,   r t _ t h r e a d _ s e l f ( ) - > n a m e ) ;  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
                 l i s t _ t h r e a d ( ) ;  
 # e n d i f   / *   R T _ U S I N G _ F I N S H   * /  
         }  
         e l s e  
         {  
                 r t _ k p r i n t f ( " h a r d   f a u l t   o n   h a n d l e r \ r \ n \ r \ n " ) ;  
         }  
  
 # i f d e f   R T _ U S I N G _ F I N S H  
         h a r d _ f a u l t _ t r a c k ( ) ;  
 # e n d i f   / *   R T _ U S I N G _ F I N S H   * /  
  
         w h i l e   ( 1 ) ;  
 }  
  
 / * *  
   *   s h u t d o w n   C P U  
   * /  
 v o i d   r t _ h w _ c p u _ s h u t d o w n ( v o i d )  
 {  
         r t _ k p r i n t f ( " s h u t d o w n . . . \ n " ) ;  
  
         R T _ A S S E R T ( 0 ) ;  
 }  
  
 / * *  
   *   r e s e t   C P U  
   * /  
 R T _ W E A K   v o i d   r t _ h w _ c p u _ r e s e t ( v o i d )  
 {  
         S C B _ A I R C R   =   S C B _ R E S E T _ V A L U E ;  
 }  
  
 # i f d e f   R T _ U S I N G _ C P U _ F F S  
 / * *  
   *   T h i s   f u n c t i o n   f i n d s   t h e   f i r s t   b i t   s e t   ( b e g i n n i n g   w i t h   t h e   l e a s t   s i g n i f i c a n t   b i t )  
   *   i n   v a l u e   a n d   r e t u r n   t h e   i n d e x   o f   t h a t   b i t .  
   *  
   *   B i t s   a r e   n u m b e r e d   s t a r t i n g   a t   1   ( t h e   l e a s t   s i g n i f i c a n t   b i t ) .     A   r e t u r n   v a l u e   o f  
   *   z e r o   f r o m   a n y   o f   t h e s e   f u n c t i o n s   m e a n s   t h a t   t h e   a r g u m e n t   w a s   z e r o .  
   *  
   *   @ r e t u r n   r e t u r n   t h e   i n d e x   o f   t h e   f i r s t   b i t   s e t .   I f   v a l u e   i s   0 ,   t h e n   t h i s   f u n c t i o n  
   *   s h a l l   r e t u r n   0 .  
   * /  
 # i f   d e f i n e d ( _ _ C C _ A R M )  
 _ _ a s m   i n t   _ _ r t _ f f s ( i n t   v a l u e )  
 {  
         C M P           r 0 ,   # 0 x 0 0  
         B E Q           e x i t  
  
         R B I T         r 0 ,   r 0  
         C L Z           r 0 ,   r 0  
         A D D S         r 0 ,   r 0 ,   # 0 x 0 1  
  
 e x i t  
         B X             l r  
 }  
 # e l i f   d e f i n e d ( _ _ C L A N G _ A R M )  
 i n t   _ _ r t _ f f s ( i n t   v a l u e )  
 {  
         _ _ a s m   v o l a t i l e (  
                 " C M P           r 0 ,   # 0 x 0 0                         \ n "  
                 " B E Q           1 f                                       \ n "  
  
                 " R B I T         r 0 ,   r 0                               \ n "  
                 " C L Z           r 0 ,   r 0                               \ n "  
                 " A D D S         r 0 ,   r 0 ,   # 0 x 0 1                 \ n "  
  
                 " 1 :                                                       \ n "  
  
                 :   " = r " ( v a l u e )  
                 :   " r " ( v a l u e )  
         ) ;  
         r e t u r n   v a l u e ;  
 }  
 # e l i f   d e f i n e d ( _ _ I A R _ S Y S T E M S _ I C C _ _ )  
 i n t   _ _ r t _ f f s ( i n t   v a l u e )  
 {  
         i f   ( v a l u e   = =   0 )   r e t u r n   v a l u e ;  
  
         a s m ( " R B I T   % 0 ,   % 1 "   :   " = r " ( v a l u e )   :   " r " ( v a l u e ) ) ;  
         a s m ( " C L Z     % 0 ,   % 1 "   :   " = r " ( v a l u e )   :   " r " ( v a l u e ) ) ;  
         a s m ( " A D D S   % 0 ,   % 1 ,   # 0 x 0 1 "   :   " = r " ( v a l u e )   :   " r " ( v a l u e ) ) ;  
  
         r e t u r n   v a l u e ;  
 }  
 # e l i f   d e f i n e d ( _ _ G N U C _ _ )  
 i n t   _ _ r t _ f f s ( i n t   v a l u e )  
 {  
         r e t u r n   _ _ b u i l t i n _ f f s ( v a l u e ) ;  
 }  
 # e n d i f  
  
 # e n d i f  